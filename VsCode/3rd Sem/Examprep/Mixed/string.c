// #include <stdio.h>

// int findLength(char *str)
// {
//   int length = 0;
//   while (str[length] != '\0')
//   {
//     length++;
//   }
//   return length;
// }

// int main()
// {
//   char str[] = "cnaveen";
//   printf("Original string: %s\n", str);
//   int length = findLength(str);
//   printf("Length of the string: %d\n", length);
//   return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
  char s1[20], s2[20], s3[40];
  printf("Enter first string: ");
  gets(s1); // reads first string
  printf("Enter second string: ");
  gets(s2); // reads second string

  if (strcmp(s1, s2) == 0) // compares two strings
    printf("Strings are equal.\n");
  else
    printf("Strings are not equal.\n");

  strcat(s1, s2); // concatenates two strings
  printf("Concatenated string: %s\n", s1);

  strcpy(s3, s1); // copies one string to another
  printf("Copied string: %s\n", s3);

  return 0;
}