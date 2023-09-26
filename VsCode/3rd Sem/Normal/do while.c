#include <stdio.h>

int main()
{
  int i;
  printf(" Enter the number to check even and odd numbers\n");
  scanf("%d", &i);
  while (i & 2 == 0)

  {
    printf("The given number is even\n");
  }
  printf("The given number is odd\n");

  return 0;
}