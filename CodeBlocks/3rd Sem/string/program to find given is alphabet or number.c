#include <stdio.h>

int main()
{
  char ch;
  printf(" Please Enter any character :  ");
  scanf("%c", &ch);

  if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
  {
  	printf("\n %c is an Alphabet", ch);
  }
  else if (ch >= '0' && ch <= '9')
  {
  	printf("\n %c is a Digit \n", ch);
  }
  else
    printf("\n %c is not an Alphabet, or a Digit", ch);

  return 0;
}
