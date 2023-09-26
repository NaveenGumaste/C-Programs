#include <stdio.h>

int oddeven(int);
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  oddeven(num);
  return 0;
}
// function
int oddeven(int num)
{
  if (num % 2 == 0)
  {
    printf("%d is even.\n", num);
  }
  else
  {
    printf("%d is odd.\n", num);
  }
}
