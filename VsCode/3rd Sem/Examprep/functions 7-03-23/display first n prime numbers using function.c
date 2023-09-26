
#include <stdio.h>

void print_n_prime(int n)
{
  int i, j, flag;
  for (i = 2; i <= n; ++i)
  {
    flag = 0;
    for (j = 2; j <= i / 2; ++j)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
    {
      printf("%d ", i);
    }
  }

  printf("\n");

  return;
}

int main()
{

  int n;

  printf("Enter the value of n: ");

  scanf("%d", &n);

  printf("First %d prime numbers are: \n", n);

  print_n_prime(n);
  return 0;
}