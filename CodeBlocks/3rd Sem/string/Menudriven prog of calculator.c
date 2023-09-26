#include <stdio.h>
int main()
{
    int choice;
    int a,b,c;
    printf("                       Calculation menu                 \n\n");
    printf("\nEnter choice 1 for Addition of two numbers.\n");
    printf("\nEnter choice 2 for Subtraction of two numbers.\n");
    printf("\nEnter choice 3 for Multiplication of two numbers.\n");
    printf("\nEnter choice 4 for Division of two numbers.\n");
    choice = inputfun();
    switch(choice)
    {
    case 1:
        printf("Enter a b\n");
        a = inputfun();
        b = inputfun();
        c = a+b;
        printf("Addition: \n");
        display(c);
        break;
    case 2:
        printf("Enter a b\n");
        a = inputfun();
        b = inputfun();
        c = a-b;
        printf("Subtraction: \n");
        display(c);
        break;
    case 3:
        printf("Enter a b\n");
        a = inputfun();
        b = inputfun();
        c = a*b;
        printf("Multiplication: \n");
        display(c);
        break;
    case 4:
        printf("Enter a b\n");
        a = inputfun();
        b = inputfun();
        c = a/b;
        printf("Division: \n");
        display(c);
        break;
        default:
        printf("wrong Input\n");

        return 0;
    }

}

int inputfun()
{

int number;
scanf("%d", &number);
return(number);
}

void display(int number)
{
    printf("%d", number);
}
