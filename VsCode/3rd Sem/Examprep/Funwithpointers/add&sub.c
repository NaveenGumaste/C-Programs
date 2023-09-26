#include <stdio.h>

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
}