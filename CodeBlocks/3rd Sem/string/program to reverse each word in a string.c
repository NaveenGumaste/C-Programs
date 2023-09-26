#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
       *end-- = temp;
    }
}
int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
   int len = strlen(str);
    reverse_word(str, str + len - 1);
i = 0;
    for (j = 0; j <= len; j++) {
        if (str[j] == ' ' || str[j] == '\0') {
            reverse_word(str + i, str + j - 1);
            i = j + 1;
        }
    }
    printf("Reversed string: %s", str);
    return 0;
}
