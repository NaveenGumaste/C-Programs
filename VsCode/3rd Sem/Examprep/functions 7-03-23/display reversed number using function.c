#include <stdio.h>

void reverse_number(int num)
{
  int rev = 0;

  while (num > 0)
  {
    rev = (rev * 10) + (num % 10);
    num /= 10;
  }

  printf("Reversed Number: %d\n", rev); // print the reversed number
}

int main()
{
  int num;

  printf("Enter a number: "); // input a number from user
  scanf("%d", &num);

  reverse_number(num); // call the function to reverse the number

  return 0;
}