#include <stdio.h>

void printArray(int *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n\n");
}

void selectionSort(int *A, int n)
{
  int min, temp;
  printf("Running Selection sort...\n");
  for (int i = 0; i < n - 1; i++)
  {
    min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (A[j] < A[min])
      {
        min = j;
      }
    }
    temp = A[i];
    A[i] = A[min];
    A[min] = temp;
  }
}
int main()
{
  int A[] = {3,5,4,9,23,80,55};
  int n = 7;
  printArray(A, n);
  selectionSort(A, n);
  printArray(A, n);
  return 0;
}