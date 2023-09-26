#include<stdio.h>
int main()
{
int week;
printf("Enter week no(1-7):");
scanf("%d",&week);

if(week==1)
{
printf("The week day is Monday");
}
else if(week==2)
{
printf("The week is Tuesday");
}
else if(week==3)
{
printf("The week is Wednesday");
}
else if(week==4)
{
printf("the week is Thursday");
}
else if(week==5)
{
printf("The week is Friday");
}
else if (week==6)
{
printf("The week is Saturday");
}
else if(week==7)
{
    printf("The week is Sunday");
}
else
    {
printf("The input is wrong");
}
}
