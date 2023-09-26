#include <stdio.h>
int prime(int array[100], int length)
{
  int res[length], count = 0, x = 0;
  for (int i = 0; i < length; i++)
  {
    for (int j = 2; j <= array[i] / 2; j++)
    {
      if (array[i] % j == 0)
      {
        count++;
      }
    }
    if (count == 0)
    {
      res[x] = array[i];
      x++;
    }
    count = 0;
  }
  printf("Prime numbers in the array\n");
  for (int i = 0; i < x; i++)
  {
    printf("%d ", res[i]);
  }
}

int rev(int data)
{
  int reverse = 0, remainder;
  while (data != 0)
  {
    remainder = data % 10;
    reverse = reverse * 10 + remainder;
    data /= 10;
  }
  printf("\nReversed number = %d", reverse);
}

int main()
{
  int len, data;
  printf("Enter a number of integers: ");
  scanf("%d", &len);
  int array[len];
  printf("Enter all of the array %d numbers: ", len);
  for (int i = 0; i < len; i++)
  {
    scanf("%d", &array[i]);
  }

  printf("\nEnter the numbers which are to be reversed: ");
  scanf("%d", &data);
  prime(array, len);
  rev(data);
}
