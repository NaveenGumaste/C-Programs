#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20], small[20], large[20];
    int i, j, len, small_len, large_len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    small_len = large_len = 0;

    for (i = 0; i < len; i++) {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        if (j > large_len) {
            large_len = j;
            strcpy(large, word);
        }

        if (j < small_len || small_len == 0) {
            small_len = j;
            strcpy(small, word);
        }
    }

    printf("Smallest word: %s\n", small);
    printf("Largest word: %s\n", large);

    return 0;
}
