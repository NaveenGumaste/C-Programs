#include <stdio.h>

double average(int arr[], int size)
{
  if (size == 0)
    return 0;

  double avg = average(arr, size - 1);

  avg = ((avg * (size - 1) + arr[size - 1])) / size;

  return avg;
}

int maximum(int arr[], int size)
{
  if (size == 1)
    return arr[0];

  int max = maximum(arr, size - 1);

  if (arr[size - 1] > max)
    max = arr[size - 1];

  return max;
}

int main()
{
  int arr[] = {2, 4, 6, 8, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  double avg = average(arr, size);
  int max = maximum(arr, size);

  printf("Average: %.2lf\n", avg);
  printf("Maximum: %d\n", max);

  return 0;
}