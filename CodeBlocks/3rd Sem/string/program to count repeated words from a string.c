#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = " This is a sample to respond to the sample word given below as a sample";
    char word[] = "sample";

int countRepeatedWords(char *str, char *word) {
    int i, j = 0, k = 0, count = 0;
    int len1 = strlen(str), len2 = strlen(word);

    for (i = 0; i < len1; i++) {
        if (str[i] == word[j]) {
            for (k = i, j = 0; j < len2; j++, k++) {
                if (str[k] != word[j]) {
                    break;
                }
            }
            if (j == len2) {
                count++;
            }
            j = 0;
        }
    }

    return count;
}

    printf("Original string: %s\n", str);
    int count = countRepeatedWords(str, word);
    printf("\n'%s' is repeated %d times in the string.\n", word, count);

    return 0;
}
