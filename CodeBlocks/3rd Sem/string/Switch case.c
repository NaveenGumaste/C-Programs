#include<stdio.h>
int main()
{
int choice;
printf("Enter a choice");
scanf ("%d",&choice);
switch(choice)
{
    case 1:
    printf("\n Hello");
    break;
    case 2:
    printf("\n Tommorow is holiday");
    break;
    case 3:
    printf("\n Today is c class");
    break;
    default:
    printf("\n choice is wrong");
}
return 0;
}
