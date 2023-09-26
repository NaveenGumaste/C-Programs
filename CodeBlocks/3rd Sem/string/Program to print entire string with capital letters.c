#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}

int main()
{
    char str[] = "hello my name is naveen";
    printf("Original string: %s\n", str);
    toUpperCase(str);
    printf("String with all letters in uppercase: %s\n", str);
    return 0;
}

