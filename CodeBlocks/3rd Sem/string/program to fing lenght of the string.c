#include <stdio.h>

int findLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "My name is naveen";
    printf("Original string: %s\n", str);
    int length = findLength(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
