#include <stdio.h>
#include <stdlib.h>

void fib(int *series);

int main()
{
  int series;
  printf("Enter the series: ");
  scanf("%d", &series);

  fib(&series);

  return 0;
}

void fib(int *series)
{
  int a = 0, b = 1, c;

  printf("fib series up to %d:\n", *series);
  printf("%d, %d, ", a, b);

  for (int i = 2; i < *series; i++)
  {
    c = a + b;
    printf("%d, ", c);
    a = b;
    b = c;
  }
}