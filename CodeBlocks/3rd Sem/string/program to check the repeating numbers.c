#include <stdio.h>

int main()
{
  int count[10]={0};
  int n;
  printf("insert a number\n");
  if ( scanf("%d", & n) != 1) return -1;
  if ( n <= 0 ) return -1;
  while  ( n > 0)
  {
    ++count[ n%10];
    n /= 10;
  }

  for (n=0; n<10; ++n)
    if ( count[n] )
      printf("%d is repeated %d times\n", n, count[n]);

  return 0;
}
