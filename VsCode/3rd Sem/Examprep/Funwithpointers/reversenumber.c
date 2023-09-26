include <stdio.h>
#include <stdlib.h>

void reverseNumber(int *num);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  reverseNumber(&num);

  printf("Reversed number: %d\n", num);

  return 0;
}

void reverseNumber(int *num)
{
  int reversed = 0;
  int remainder;

  while (*num > 0)
  {
    remainder = *num % 10;
    reversed = (reversed * 10) + remainder;
    *num /= 10;
  }

  *num = reversed;
}