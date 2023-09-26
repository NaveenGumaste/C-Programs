
#include <stdio.h>

int sumDivisibleBy9(int start, int end);

int main()
{
  int start = 100, end = 200;
  printf("\nSum of all integers divisible by 9 between %d and %d is %d", start, end, sumDivisibleBy9(start, end));
  return 0;
}

int sumDivisibleBy9(int start, int end) // Function to find the number and sum of interger between 100 and 200 which are divisble by 9
{
  int i, sum = 0;

  for (i = start; i <= end; i++)
  {

    if (i % 9 == 0)
    {

      printf("%d\t", i);

      sum += i; // Summing up the numbers divisible by 9.
    }
  }

  return sum; // Returning the result.
}