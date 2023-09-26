#include <stdio.h>

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n%11==0)
    {
        printf("Number is divisible by 11");
    }
    else
    {
        printf("Number is not divisible by 11");
    }

    return 0;
}
