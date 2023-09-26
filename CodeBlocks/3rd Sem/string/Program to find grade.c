#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<75)
    {
        printf("Grade B");
    }
    else if(marks>=75 && marks<89)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}

