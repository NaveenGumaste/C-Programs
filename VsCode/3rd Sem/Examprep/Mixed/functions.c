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
  printf("Prime array\n");
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
  printf("Reversed number = %d", reverse);
}

int main()
{
  int len, data;
  printf("Enter a number of integers: ");
  scanf("%d", &len);
  int array[len];
  printf("Enter all %d numbers: ", len);
  for (int i = 0; i < len; i++)
  {
    scanf("%d", &array[i]);
  }

  printf("\nEnter the number to be reversed: ");
  scanf("%d", &data);
  prime(array, len);
  rev(data);
}

/*int is_prime(int num);
int reverseNumber(int num);
{
  int i;
  if (num < 2)
  {
    return 0;
  }
  for (i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (is_prime(num))
  {
    printf("%d is prime\n", num);
  }
  else
  {
    printf("%d is not prime\n", num);
  }
  return 0;
}*/