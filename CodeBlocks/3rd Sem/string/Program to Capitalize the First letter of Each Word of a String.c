#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalizeFirstLetter(char *str) {
    int i = 0;
    while (str[i]) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char str[] = "This is a sample string \n";
    printf("Original string: %s\n", str);
    capitalizeFirstLetter(str);
    printf("\nString after capitalizing first letter of each word==> %s\n", str);
    return 0;
}
