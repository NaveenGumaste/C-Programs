#include<stdio.h>
struct person
{
char name[50];
int accno;
float salary;
};
int main()
{
struct person emp[20];
int i,j,temp;
for(i=0; i<5; i++)
{
    printf("enter name:");
    scanf("%s",emp[i].name);
    printf("\n enter accno:");
    scanf("%d",&emp[i].accno);
    printf("\n enter salary:");
    scanf("%f",&emp[i].salary);
}

for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(emp[i].accno > emp[j].accno)
            {
                temp = emp[i].accno;
                emp[i].accno = emp[j].accno;
                emp[j].accno = temp;
            }
        }
    }
printf("Name\t\t Accno\t\t salary\n");
for(i=0;i<5;i++)
{
    printf("%s\t",emp[i].name);
    printf("%d\t",emp[i].accno);
    printf("%.2f\t\n",emp[i].salary);
}
return 0;
}
