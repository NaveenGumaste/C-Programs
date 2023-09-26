#include<stdio.h>
int main()
{
    char str[100] = "O1FE22BEC407";
    int i,sum = 0;

    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))
        {

            sum += (str[i] - '0');

        }
    }
    printf("Sum of all digits: %d\n", sum);
    return 0;
}
