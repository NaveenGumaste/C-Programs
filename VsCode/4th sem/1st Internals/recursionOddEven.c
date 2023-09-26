#include <stdio.h>

int isEven(int n);

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (isEven(num))
    printf("%d is even.\n", num);
  else
    printf("%d is odd.\n", num);

  return 0;
}

int isEven(int n)
{
  if (n == 0)
    return 1; // Base case: 0 is even
  else if (n == 1)
    return 0; // Base case: 1 is odd
  else
    return isEven(n - 2); // Recursive case: subtract 2 and check again
}
