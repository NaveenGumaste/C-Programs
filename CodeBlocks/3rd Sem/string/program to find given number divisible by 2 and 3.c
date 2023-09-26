#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if((num % 2 == 0) && (num % 3 == 0))
    {
        printf("\n Number is divisible by 2 and 3 \n ");
    }
    else
    {
        printf("\n Number is not divisible by 2 and 3 \n ");
    }

    return 0;
}
