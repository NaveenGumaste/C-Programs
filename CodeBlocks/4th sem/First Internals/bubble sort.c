#include <stdio.h>

void printArray(int *arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", &arr[i]);
  }
  printf("\n");
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
    *a = *b;
  *b = temp;
}

void bubblesort(int arr[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[i] > arr[j + 1])
      {
        swap(&arr[i], &arr[j+1]);
      }
    }
  }
}

int main()
{
  int arr[] = {8, 7, 2, 5};
  int n = 4;
  bubblesort(arr, n);
  printf("Sorted array");
  printArray(arr, n);

  return 0;
}
