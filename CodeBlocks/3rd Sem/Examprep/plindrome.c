#include <stdio.h>
#include <stdlib.h>
void main()
{
  char str[100];
  int l = 0;

  printf("Enter a string: ");
  fgets(str, sizeof (str), stdin);
  while (str[l] != "\0")
  {
    l++;
  }
  printf("Length of the string is: %d\n", l - 1);
}
