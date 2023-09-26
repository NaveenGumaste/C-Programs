#include <stdio.h>

void div(int *num);
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  div(&num);

  return 0;
}

void div(int *num)
{
  if ((*num % 2 == 0) && (*num % 3 == 0))
  {
    printf("\n Number is divisible by 2 and 3 \n ");
  }
  else
  {
    printf("\n Number is not divisible by 2 and 3 \n ");
  }
}