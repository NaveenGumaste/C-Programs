#include<stdio.h>
#include<string.h>

 main()
{
char stri[20];
int i=0,count=0;
scanf("%s",stri);
printf("name length %d\n", strlen(stri));
while (stri[i]!='\0')
{
    count=count+1;
    i++;
}
printf("%d string lenght\n",count);
}
