#include <stdio.h>

void check_prime(int *num);

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  check_prime(&num);

  return 0;
}

void check_prime(int *num)
{
  int i, flag = 0;

  for (i = 2; i <= (*num / 2); i++)
  {
    if (*num % i == 0)
    {
      flag = 1;
      break;
    }
  }

  if (*num <= 1)
  {
    printf("%d is not a prime number.\n", *num);
  }
  else
  {
    if (flag == 0)
    {
      printf("%d is a prime number.\n", *num);
    }
    else
    {
      printf("%d is not a prime number.\n", *num);
    }
  }
}