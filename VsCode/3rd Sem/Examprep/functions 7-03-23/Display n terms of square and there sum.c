#include <stdio.h>
int square(int n);
int main()
{
  int n, i, sum = 0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("The first %d natural numbers are: \n", n);
  for (i = 1; i <= n; i++)
  {
    printf("%d\t", i);
    sum += square(i); // calling function to calculate square of number
  }

  printf("\nThe Sum of Square of Natural Numbers upto %d terms : %d ", n, sum);

  return 0;
}
int square(int n) // function definition to calculate square of number
{
  int result = 0; // local variable declaration

  result = n * n; // calculating square of number

  return result; // returning the result
}