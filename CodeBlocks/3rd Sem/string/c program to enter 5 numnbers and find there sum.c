#include <stdio.h>

int main()
{
  int i, num, sum = 0;
  for (i = 1; i <= 5; i++)
    {
    printf("Enter a number: ");
    scanf("%d", &num);
    sum += num;
  }
  printf("Sum of 5 numbers is: %d\n", sum);
  return 0;
}
