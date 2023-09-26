#include <stdio.h>
#include <string.h>

struct person{
    char    name[30];
    int     accno;
    float   salary;
};

int main()
{
    struct person pr1;
    strcpy(pr1.name,"Naveen");
    pr1.accno = 3560;
    pr1.salary =38360;
    printf("name:%s\n",pr1.name);
    printf("account:%d\n",pr1.accno);
    printf("salary:%.2f\n",pr1.salary);

    return 0;
}
