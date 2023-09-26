#include <stdio.h>
int main()
{
  int i;
  int *ptr;
  ptr = &i;
  for (i = 1; i <= 10; i++)
  {
    printf(" %d", *ptr);
    printf("%d\n", ptr);
  }
  return 0;
}
