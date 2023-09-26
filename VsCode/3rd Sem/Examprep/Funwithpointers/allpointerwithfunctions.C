//* Addition and subtraction using function and pointers */

/*#include <stdio.h>

void add(int *a, int *b, int *sum);
void sub(int *a, int *b, int *diff);
int main()
{
  int a, b, sum, diff;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  add(&a, &b, &sum);
  sub(&a, &b, &diff);

  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", diff);

  return 0;
}

void add(int *a, int *b, int *sum)
{
  *sum = *a + *b;
}

void sub(int *a, int *b, int *diff)
{
  *diff = *a - *b;
}*/

//! Find the prime number using function and pointers */

/*#include <stdio.h>

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
}*/

//? check whether number is divisible by 2 and 3 using function and pointers */

/*#include <stdio.h>

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
}*/

//! Simple swapping of value from a & b using function and pointers */

/*#include <stdio.h>
void swap(int *, int *);
int main()
{
  int a, b;
  printf("Enter the value of a:");
  scanf("%d", &a);
  printf("Enter the value of b:");
  scanf("%d", &b);

  printf("\n Before swapping a=%d ,b=%d", a, b);
  swap(a, b);
  printf("\n After swapping a=%d ,b=%d", a, b);

  return 0;
}
void swap(int *x, int *y)
{
  int temp;
  temp = *y;
  *x = *y;
  *y = temp;
}*/

//* check whether number is armstrong using function and pointers */

/*#include <stdio.h>
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
}*/

//! reverse the given number using function and pointers */

#/*include <stdio.h>
#include <stdlib.h>

void reverseNumber(int *num);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  reverseNumber(&num);

  printf("Reversed number: %d\n", num);

  return 0;
}

void reverseNumber(int *num)
{
  int reversed = 0;
  int remainder;

  while (*num > 0)
  {
    remainder = *num % 10;
    reversed = (reversed * 10) + remainder;
    *num /= 10;
  }

  *num = reversed;
}*/

//? fib series using function and pointers */

/*#include <stdio.h>
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
}*/
