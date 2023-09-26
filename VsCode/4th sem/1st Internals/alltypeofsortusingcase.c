//? Insertion sort using menu

#include <stdio.h>

void printArray(int *A, int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n\n");
}

void insertionSort(int *A, int n)
{
  int key, j;
  // Loop for passes
  for (int i = 1; i <= n - 1; i++)
  {
    key = A[i];
    j = i - 1;
    // Loop for each pass
    while (j >= 0 && A[j] > key)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = key;
  }
}

int main()
{
  int A[] = {12, 54, 7, 23, 9};
  int n = 5;
  int choice;

  while (1)
  {
    printf("\n\t\tInsertion Sort Menu: ");
    printf("\n1. Display Given Input: ");
    printf("\n2. Insertion Sorting: ");
    printf("\n3. Display Final Output:");
    printf("\n4. Exit");
    printf("\n\nEnter Your Choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printArray(A, n);
      break;
    case 2:
      insertionSort(A, n);
      break;
    case 3:
      printArray(A, n);
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}*/

//* //! Bubble sort using menu

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
  int choice;
  while (1)
  {
    printf("\n\t\tBubble Sort Menu: ");
    printf("\n1. Display Given Input: ");
    printf("\n2. Bubble Sorting: ");
    printf("\n3. Display Final Output:");
    printf("\n4. Exit");
    printf("\n\nEnter Your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printArray(A, n);
      break;
    case 2:
      bubbleSort(A, n);
      break;
    case 3:
      printArray(A, n);
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}*/

//! Selection sort using menu
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
  int indexOfMin, temp;
  printf("Running Selection sort...\n");
  for (int i = 0; i < n - 1; i++)
  {
    indexOfMin = i;
    for (int j = i + 1; j < n; j++)
    {
      if (A[j] < A[indexOfMin])
      {
        indexOfMin = j;
      }
    }

    // Swap A[i] and A[indexOfMin]
    temp = A[i];
    A[i] = A[indexOfMin];
    A[indexOfMin] = temp;
  }
}

int main()
{
  int A[] = {3, 5, 2, 13, 12};
  int n = 5;
  int choice;
  while (1)
  {
    printf("\n\t\tSelection Sort Menu: ");
    printf("\n1. Display Given Input: ");
    printf("\n2. Selection Sorting: ");
    printf("\n3. Display Final Output:");
    printf("\n4. Exit");
    printf("\n\nEnter Your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printArray(A, n);
      break;
    case 2:
      selectionSort(A, n);
      break;
    case 3:
      printArray(A, n);
      break;
    case 4:
      return 0;
      break;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}*/
