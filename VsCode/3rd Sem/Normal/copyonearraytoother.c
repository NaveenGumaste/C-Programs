#include <stdio.h>
int main()
{
  int i, size;
  int arr1[size], 3arr2 [size];
  printf("Enter the size of the array:");
  scanf("%d", &size);
  printf("Entet the elements of the first array: \n");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr1[i]);
  }
  for (i = 0; i < size; i++)
  {
    arr2[i] = arr1[i];
  }
  printf("Elements of second array:\n");
  for (i = 0; i < size; i++)
  {
    printf("%d", arr2[i]);
  }
  return 0;
}