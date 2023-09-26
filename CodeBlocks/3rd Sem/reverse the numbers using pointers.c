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
