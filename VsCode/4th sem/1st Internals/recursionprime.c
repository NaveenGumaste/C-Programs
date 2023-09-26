#include <stdio.h>

int isPrime(int n, int i);

int main()
{
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (isPrime(num, num / 2))
    printf("%d is a prime number.\n", num);
  else
    printf("%d is not a prime number.\n", num);

  return 0;
}

int isPrime(int n, int i)
{
  if (i == 1)
    return 1; // Base case: smallest divisor reached, number is prime
  else
  {
    if (n % i == 0)
      return 0; // Base case: number is divisible by a divisor other than 1 and itself
    else
      return isPrime(n, i - 1); // Recursive case: check the next smaller divisor
  }
}