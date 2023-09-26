#include <lpc214x.h>
#include <stdio.h>
#include <string.h>

#define LCD (0xFF << 16)
#define RS (1 << 13)
#define RW (1 << 14)
#define EN (1 << 15)

#define LED_PIN1 (1 << 25) // Assume LED1 is connected to P0.25 (Green LED)
#define LED_PIN2 (1 << 26) // Assume LED2 is connected to P0.26 (Red LED)

#define bit(x) (1 << x)
#define TOLL_AMOUNT 50 // Adjust this value according to your requirement

struct User {
    unsigned char rfid[13]; // 12 characters for RFID data + 1 for null-terminator
    int balance;
};

struct User users[] = {
    { "ABCDEF123456", 100 }, // Example user with RFID "ABCDEF123456" and balance 100
    // Add more users here as needed
};

void delay_fv(unsigned int x, int y);
void lcd_display(unsigned int x);
void cmd(unsigned char m);
void lcd_pos(int line, int pos);
void lcd_ini(void);
void lcd_str(const unsigned char *x);

void ser_init(void);
void tx(unsigned char c);
unsigned char rx(void);
void tx_string(unsigned char *s);

void delay(unsigned int d);
void read_rfid_data(unsigned char *rfid_data);
int check_balance(int user_index);

void init_toll_booth(void);
void toll_booth_operation(void);

void delay_fv(unsigned int x, int y) {
    unsigned int i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++);
}

void lcd_display(unsigned int x) {
    IO0CLR |= (RS | RW | EN | LCD);
    IO0SET |= (x << 16);
    IO0SET |= RS;
    IO0CLR |= RW;
    IO0SET |= EN;
    delay_fv(100, 10);
    IO0CLR |= EN;
    delay_fv(10, 10);
}

void cmd(unsigned char m) {
    IO0CLR |= (RS | RW | EN | LCD);
    IO0SET |= (m << 16);
    IO0CLR |= RS;
    IO0CLR |= RW;
    IO0SET |= EN;
    delay_fv(100, 250);
    IO0CLR |= EN;
    delay_fv(10, 10);
}

void lcd_pos(int line, int pos) {
    if (line == 1) {
        cmd(0x80 + pos);
    } else if (line == 2) {
        cmd(0xC0 + pos);
    }
}

void lcd_ini(void) {
    cmd(0x38);
    cmd(0x0E);
    cmd(0x06);
    cmd(0x01);
    cmd(0x80);
}

void lcd_str(const unsigned char *x) {
    while (*x != '\0') {
        lcd_display(*x);
        x++;
    }
}

void ser_init(void) {
    PINSEL0 |= 0x00000005;
    U0LCR = 0x83;
    U0DLL = 195;
    U0DLM = 0;
    U0LCR = 0x03;
}

void tx(unsigned char c) {
    U0THR = c;
    while ((U0LSR & (1 << 5)) == 0);
}

unsigned char rx(void) {
    while (!(U0LSR & (1 << 0)));
    return U0RBR;
}

void delay(unsigned int d) {
    volatile unsigned int i;
    for (i = 0; i < d; i++);
}

void read_rfid_data(unsigned char *rfid_data) {
    int i;
    unsigned char received_char;

    for (i = 0; i < 12; i++) {
        received_char = rx();
        rfid_data[i] = received_char;
    }
    rfid_data[12] = '\0'; // Null-terminate the RFID string
}

int check_balance(int user_index) {
    if (users[user_index].balance >= TOLL_AMOUNT) {
        users[user_index].balance -= TOLL_AMOUNT; // Deduct the toll amount from the user's balance
        return users[user_index].balance; // Return remaining balance
    }
    return -1; // Return -1 for low balance
}

void init_toll_booth(void) {
    PINSEL0 = 0x00000000;
    PINSEL1 = 0x00000000;
    IO0DIR = 0xFFFFFFFF;
    IO0DIR |= (LED_PIN1 | LED_PIN2); // Set LED_PIN1 and LED_PIN2 as OUTPUT
    lcd_ini();
    ser_init();
}

void toll_booth_operation(void) {
    while (1) {
        unsigned char rfid_data[13]; // 12 characters for RFID data + 1 for null-terminator
        int user_index,i,balance;

        cmd(0x01); // Clear the LCD display
        cmd(0x80);
        lcd_str("<<<WELCOME>>>");

        for (i = 0; i < 12; i++) {
            rfid_data[i] = rx();
        }
        rfid_data[12] = '\0'; // Null-terminate the RFID string

        cmd(0x01); // Clear the LCD display
        cmd(0x80);
        lcd_str("VALIDATING...");

        delay(1000000); // Wait for some delay (adjust the value for the desired delay)

        // RFID validation
        user_index = -1;
        for (i = 0; i < sizeof(users) / sizeof(users[0]); i++) {
            if (strcmp(rfid_data, users[i].rfid) == 0) {
                user_index = i;
                break;
            }
        }

        if (user_index != -1) {
            cmd(0x01); // Clear the LCD display
            cmd(0x80);
            lcd_str("VALID");
            IO0SET |= LED_PIN1; // Turn on LED1 (Green)

            // Additional delay after displaying "VALID"
            delay(2000000); // Adjust the value for the desired delay

            balance = check_balance(user_index);
            if (balance != -1) {
                char balance_str[8];
                cmd(0x01); // Clear the LCD display
                cmd(0x80);
                lcd_str("BALANCE");
                // Display remaining balance in the lower segment of LCD
                cmd(0xC0);
                sprintf(balance_str, "%d", balance);
                lcd_str(balance_str);

                // Additional delay after displaying balance
                delay(2000000); // Adjust the value for the desired delay
            } else {
                char balance_str[8];
                cmd(0x01); // Clear the LCD display
                cmd(0x80);
                lcd_str("LOW BALANCE");
                // Display remaining balance in the lower segment of LCD
                cmd(0xC0);
                sprintf(balance_str, "%d", users[user_index].balance);
                lcd_str(balance_str);

                // Additional delay after displaying "LOW BALANCE"
                delay(2000000); // Adjust the value for the desired delay

                IO0SET |= LED_PIN2; // Turn on LED2 (Red)

                // Additional delay after displaying "LOW BALANCE"
                delay(2000000); // Adjust the value for the desired delay

                IO0CLR |= LED_PIN2; // Turn off LED2 (Red)
            }

            IO0CLR |= LED_PIN1; // Turn off LED1 (Green)
        } else {
            cmd(0x01); // Clear the LCD display
            cmd(0x80);
            lcd_str("INVALID USER");
            IO0SET |= LED_PIN2; // Turn on LED2 (Red)

            // Additional delay after displaying "INVALID USER"
            delay(2000000); // Adjust the value for the desired delay

            IO0CLR |= LED_PIN2; // Turn off LED2 (Red)
        }
    }
}

int main(void)
{
    init_toll_booth();
    toll_booth_operation();
}
