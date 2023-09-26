#include <stdio.h>
#include <math.h>

int Armstrong(int *num);

int power(int n, int r)
{
  return pow(n, r);
}

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (Armstrong(&num))
  {
    printf("%d is an Armstrong number.\n", num);
  }
  else
  {
    printf("%d is not an Armstrong number.\n", num);
  }

  return 0;
}

int Armstrong(int *num)
{
  int temp = *num;
  int sum = 0;
  int digits = floor(log10(abs(temp))) + 1;

  while (temp > 0)
  {
    int digit = temp % 10;
    sum += power(digit, digits);
    temp /= 10;
  }

  return sum == *num;
}