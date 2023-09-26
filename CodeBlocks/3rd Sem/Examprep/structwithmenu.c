#include <stdio.h>
struct person
{
  char name[50], deptname[50];
  int datofjoin, empid;
  float salary, age;
};
int main()
{
  struct person emp[20];
  int i, j, temp;
  for (i = 0; i < 5; i++)
  {
    printf("enter name:");
    scanf("%s", emp[i].name);
    printf("enter age:");
    scanf("%d", &emp[i].age);
    printf("enter deptname:");
    scanf("%s", &emp[i].deptname);
    printf("enter datofjoin:");
    scanf("%d", &emp[i].datofjoin);
    printf("enter empid:");
    scanf("%d", &emp[i].empid);
    printf("enter salary:");
    scanf("%f", &emp[i].salary);
  }

  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (emp[i].empid > emp[j].empid)
      {
        temp = emp[i].empid;
        emp[i].empid = emp[j].empid;
        emp[j].empid = temp;
      }
    }
  }
  printf("Name\t Age\t Deptname\t Dateofjoin\t Empid\t salary\n");
  for (i = 0; i < 5; i++)
  {
    printf("%s\t", emp[i].name);
    printf("%f\t", emp[i].age);
    printf("%s\t\n", emp[i].deptname);
    printf("%d\t\n", emp[i].datofjoin);
    printf("%d\t\n", emp[i].empid);
    printf("%f\t\n", emp[i].salary);
  }
  return 0;
}

