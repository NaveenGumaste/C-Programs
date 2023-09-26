
#include <stdio.h>
#include <string.h>

struct person
{
    char name[50];
    int accno;
    float salary;
} p1;

int main()
{
    int i;
    struct person p1;

    /* strcpy(p1.name,"Naveen");
    p1.accno = 3560;
    p1.salary =38360;*/

    for (i=0 ; i<= 5; i++)
    {
    printf("Enter the name:");
    scanf ("%s", p1.name);
    printf("Enter account number:");
    scanf("%d", &p1.accno);
    printf("Enter the salary:");
    scanf("%f", &p1.salary);
    printf("name:%s\n",p1.name);
    printf("account:%d\n",p1.accno);
    printf("salary:%.2f\n",p1.salary);
    }

    return 0;
}
