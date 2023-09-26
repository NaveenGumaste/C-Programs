#include <stdio.h>
int add(int, int);
int main()
{
  int a, b, c;

  c = add(a, b);
  printf("%d is the Sum of a+b", c);

  return 0;
}

// function

int add(int a, int b)
{
  printf("Enter the number 1: ");
  scanf("%d", &a);
  printf("Enter the number 2: ");
  scanf("%d", &b);
  return a + b;
}
