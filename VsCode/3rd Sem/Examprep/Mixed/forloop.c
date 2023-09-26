// #include <stdio.h>
// void main()
// {
//   int a[100];
//   int i, n, sum = 0;
//   printf("Enter the number of elements to be stored in the array :\n");
//   scanf("%d", &n);
//   for (i = 0; i < n; i++)
//   {
//     printf("elements- %d:", i);
//     scanf("%d", &a[i]);
//   }
//   for (i = 0; i < n; i++)
//   {
//     sum += a[i];
//   }
//   printf("Sum of all the elements stored in the array is: %d\n", sum);
// }

#include <stdio.h>

int main()
{
  int num1, num2;
  printf("Enter the number 1 :\n");
  scanf("%d", &num1);
  printf("Enter the number 2 :\n");
  scanf("%d", &num2);
  if (num1 == num2)
    {
      printf("The numbers are equal\n");
    }
  else
  {
    printf("The numbers are not equal\n");
  }
  return 0;
}