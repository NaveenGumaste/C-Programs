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
  for (int i = 0; i < n - 1; i++) //~ For number of pass
  {
    for (int j = 0; j < n - 1 - i; j++) //! For comparison in each pass
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
  int A[] = {12, 6, 3, 63, 1};
  int n = 5;
  printArray(A, n);
  bubbleSort(A, n);
  printArray(A, n);
  return 0;
}
