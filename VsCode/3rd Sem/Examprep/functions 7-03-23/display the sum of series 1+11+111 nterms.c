#include <stdio.h>
int sumOfSeries(int n);
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Sum of the series is: %d", sumOfSeries(n));
  return 0;
}

int sumOfSeries(int n)
{
  int res = 0;

  for (int i = 1; i <= n; i++)
  {

    int term = 1;

    for (int j = 1; j <= i; j++)
    {

      term = term * 10 + 1;
    }

    res += term;
  }

  return res;
}