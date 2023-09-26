#include <stdio.h>
void swap(int *, int *);
int main()
{
  int a, b;
  a = 15;
  b = 12;
  // printf("Enter the value of a:");
  // scanf("%d", &a);
  // printf("Enter the value of b:");
  // scanf("%d", &b);

  printf("\n Before swapping a=%d ,b=%d", a, b);
  swap(&a, &b);

  return 0;
}
void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  printf("\n After swapping a=%d ,b=%d", x, y);
}