
//*! Count first 10 real numbers */

/*#include <stdio.h>
int main()
{
  int i;
  ptr = &i;
  for (i = 1; i <= 10; i++)
  {
    printf(" %d", *ptr);
  }
  return 0;
}*/

//*! Count first 10 real numbers with address print */

/*#include <stdio.h>
int main()
{
  int i;
  int *ptr;
  ptr = &i;
  for (i = 1; i <= 10; i++)
  {
    printf(" %d", *ptr);
    printf("\n", ptr);
  }
  return 0;
}*/

//*? Fibonacci series using pointers */

/* #include <stdio.h>
int main()
{
  int n, first = 0, second = 1, next, c;

  int *p, *q, *r;

  p = &first;
  q = &second;
  r = &next;

  printf("Enter the number of terms\n");
  scanf("%d", &n);

  printf("First %d terms of Fibonacci series are:\n", n);

  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      *r = i;
    else
    {
      *r = *p + *q;
      *p = *q;
      *q = *r;
    }
    printf("%d\n", *r);
  }

  return 0;
}*/

//* Find odd and even using pointers */

/*#include <stdio.h>
int main()
{
  int num;
  int *p;
  p = &num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  if (*p % 2 == 0)
    printf("%d is even.", *p);
  else
    printf("%d is odd.", *p);

  return 0;
}*/

//*! check whether number is divisible by 2 and 3 */

/*#include <stdio.h>

int main()
{
  int num;

  int *p;
  p = &num;

  printf("Enter any number: ");
  scanf("%d", &num);

  if ((*p % 2 == 0) && (*p % 3 == 0))
  {
    printf("\n Number is divisible by 2 and 3 \n ");
  }
  else
  {
    printf("\n Number is not divisible by 2 and 3 \n ");
  }

  return 0;
}*/

//*? Check whether given number is prime or not */

/*#include <stdio.h>

main()
{
  int num, i, c = 0;
  int = *t, *q;
  t = &num;
  q = &c;
  printf("Enter any number:");
  scanf("%d", &*p);

  for (i = 1; i <= *r; i++)
  {
    if (*r % i == 0)
    {
      *q++;
    }
  }

  if (*q == 2)
  {
    printf("\n Given num is a Prime number \n");
  }
  else
  {
    printf("\n Given num is not a Prime number \n");
  }
  return 0;
}*/

//*? Reverse the given numbers */

#include <stdio.h>
int main()
{
  int n = 1234, sum = 0, r;
  int *p;
  p = &sum;
  while (n > 0)
  {
    r = n % 10;
    *p = (*p) * 10 + r;
    n = n / 10;
  }
  printf("Reverse of the number:%d\n", *p);
  return 0;
}