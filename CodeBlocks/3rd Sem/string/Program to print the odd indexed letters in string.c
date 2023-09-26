#include <stdio.h>
#include <string.h>

void printOddIndexedLetters(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (i % 2 != 0) {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[] = "This is a sample string";
    printf("\n Original string: %s\n", str);
    printf("\nOdd-indexed letters: ");
    printOddIndexedLetters(str);
    printf("\n");
    return 0;
}
