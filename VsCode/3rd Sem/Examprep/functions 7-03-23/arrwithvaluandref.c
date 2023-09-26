//! WAP TO FIND SUM OF ALL ELEMENTS IN AN ARRAY
/*#include <stdio.h>
int main()
{

  int arr[100], size, i, sum = 0;

  printf("Enter array size\n");
  scanf("%d", &size);

  printf("Enter array elements\n");
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < size; i++)
    sum = sum + arr[i];

  printf("Sum of the array = %d\n", sum);

  return 0;
}*/

//? FIND SUM OF ALL ELEMENTS IN AN ARRAY USING THE FUNCTION AND POINTER

/*#include <stdio.h>
void funarr(int *ptr, int size);
int arr[100];
int main()
{

  int size, i;
  int *ptr;
  ptr = arr;

  printf("Enter array size\n");
  scanf("%d", &size);

  printf("Enter array elements\n");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  funarr(arr, size);

  return 0;
}
void funarr(int *ptr, int size)
{
  int i, sum = 0;
  for (i = 0; i < size; i++)
  {
    sum = sum + *ptr;
    ptr++;
  }
  ptr = arr;

  printf("Sum of the array =%d\n", sum);
}*/

//? FIND SUM OF ALL ELEMENTS IN AN ARRAY USING THE FUNCTION

/*#include <stdio.h>
void funarr(int arr[], int size);
int main()
{

  int arr[100], size, i;

  printf("Enter array size\n");
  scanf("%d", &size);

  printf("Enter array elements\n");
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  funarr(arr, size);

  return 0;
}
void funarr(int arr[], int size)
{
  int i, sum = 0;
  for (i = 0; i < size; i++)
    sum = sum + arr[i];

  printf("Sum of the array = %d\n", sum);
}*/

//? FIND SUM OF ALL ELEMENTS IN AN ARRAY USING THE POINTERS

/*#include <stdio.h>
int main()
{

  int arr[100], size, i, sum = 0;
  int *ptr;
  ptr = arr;

  printf("Enter array size\n");
  scanf("%d", &size);

  printf("Enter array elements\n");
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < size; i++)
  {
    sum = sum + *ptr;
    ptr++;
  }
  ptr = arr;

  printf("Sum of the array = %d\n", sum);

 return 0;
}*/
