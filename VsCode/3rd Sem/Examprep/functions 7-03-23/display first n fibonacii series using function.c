
#include <stdio.h>

int Fibonacci(int n)
{
  if (n <= 1)
    return n;
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
  int n, i;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: ");

  for (i = 0; i < n; i++)
  {
    printf("%d, ", Fibonacci(i));
  }

  return 0;
}