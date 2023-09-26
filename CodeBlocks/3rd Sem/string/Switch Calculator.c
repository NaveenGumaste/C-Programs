#include<stdio.h>
int main()
{
    int choice;
    int a,b,c;
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    printf("\n Enter a:");
    scanf("%d",&a);
    printf("\n Enter b:");
    scanf("%d",&b);
    switch (choice)
    {
        case 1:c=a+b;
        printf("\n The sum %d + %d is %d\n",a,b,c);
        break;
        case 2:c=a-b;
        printf("\n The sum %d - %d is %d\n",a,b,c);
        break;
        case 3:c=a*b;
        printf("\n The sum %d %d is %d\n",a,b,c);
        break;
        case 4:c=a/b;
        printf("\n The sum %d / %d is %d\n",a,b,c);
        break;
        return 0;
    }
}
