#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    int i, j, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if (word[j-1] == 's') {
            printf("%s ", word);
        }
    }

    return 0;
}
