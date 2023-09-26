
#include <stdio.h>

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
  int num = n;
  int dec_value = 0;

  // Initializing base value to 1, i.e 2^0
  int base = 1;

  int temp = num;
  while (temp)
  {
    int last_digit = temp % 10;
    temp = temp / 10;

    dec_value += last_digit * base;

    base = base * 2;
  }

  return dec_value; // returning the decimal value of the binary number.  								     //to the main function.
}

// Driver program to test above function

int main()
{

  int n;

  printf("Enter a binary number: "); // taking input from user.

  scanf("%d", &n); // storing the input in 'n' variable.

  printf("Decimal equivalent of %d is %d\n", n, binaryToDecimal(n)); // printing the decimal equivalent of the binary number.

  return 0; // returning 0 to main function.
}