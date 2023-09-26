#include<stdio.h>
int main()
{
int n1,n2,n3;

printf("enter the tree numbers:");

scanf("%d%d%d",&n1,&n2,&n3);

if(n1>=n2 && n1>=n3)
{
printf("%d is the greater number",n1);
}
if(n2>=n1 && n2>=n3)
{
printf("%d is the greater number",n2);
}
else
{
printf("%d is the greater number",n3);
}
}
