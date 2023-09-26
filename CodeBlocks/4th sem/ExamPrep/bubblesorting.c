#include <stdio.h>

void printArray(int *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n\n");
}

void bubbleSort(int *A, int n)
{
  int temp;
   printf("Running bubble sort...\n");
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (A[j] > A[j + 1])
      {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int A[] = {10,4,5,35,82,32,78,1};
  int n = 8;
  printArray(A, n);
  bubbleSort(A, n);
  printArray(A, n);
  return 0;
}
