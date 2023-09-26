#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int n);
int main()
{

  int num;

  printf("Enter a decimal number: "); //! prompt user to enter a decimal number.

  scanf("%d", &num); //* read the decimal number from user.

  printf("Binary equivalent of %d is: ", num); //~ print the result.

  decToBinary(num); //? call the function decToBinary() with parameter num.

  return 0;
}
void decToBinary(int n)
{
  // array to store binary number
  int binaryNum[1000];

  // counter for binary array
  int i = 0;
  while (n > 0)
  {

    //- storing remainder in binary array
    binaryNum[i] = n % 2;
    n = n / 2;
    i++;
  }

  //~ printing binary array in reverse order
  for (int j = i - 1; j >= 0; j--)
    printf("%d", binaryNum[j]);

  printf("\n"); //# print new line after printing the result.
}
