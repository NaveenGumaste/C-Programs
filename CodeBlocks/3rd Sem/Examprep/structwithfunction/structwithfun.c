#include <stdio.h>
#include <string.h>
struct person
{
  char name[100];
  int accno;
  float salary;
};
int i, j, n = 5;
struct person temp;
void datainput(struct person s1[20]);
void display(struct person s1[20]);
void structaccno(struct person s1[20]);
void structsortname(struct person s1[20]);
int main()
{
  struct person p1[20];
  datainput(p1);
  display(p1);
  structsortaccno(p1);
  printf("Sorted Accno\n\n");
  display(p1);
  structsortname(p1);
  printf("Sorted Name\n\n");
  display(p1);
  return 0;
}
int choice;
printf("Enter 1 to get the Data Display");
printf("Enter 2 to get the sort on Accno");
printf("Enter 1 to get the sort on Name");
scanf("%d",&choice);

switch(choice){

case 1:
    void datainput(struct person s1[20])
{
  for (i = 0; i < n; i++)
  {
    printf(" Enter the Name :");
    scanf("%s", s1[i].name);
    printf("Enter the Accno :");
    scanf("%s", s1[i].accno);
    printf("Enter the Salary :");
    scanf("%f", s1[i].salary);
  }
}
void display(struct person s1[20])
{
  printf("\n\n Name \t\t Accno \t\t salary \t\n");
  for (i = 0; i < n; i++)
  {
    printf(" %s", s1[i].name);
    printf(" %d", s1[i].accno);
    printf(" %.2f", s1[i].salary);
  }
}
break:
case 2:
    void structaccno(struct person s1[20])
{
  for (i = 0; i < n; i++)
  {
    if ((s1[i].accno > s1[j].accno))
    {
      temp = s1[i];
      s1[i] = s1[j];
      s1[j] = temp;
    }
  }
}
break:
case 3:
    void structname(struct person s1[20])
{
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (strcmp(s1[i].name, s1[j].name) > 0)
      {
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
      }
    }
  }
}
break:
default:
    printf("Invalid choice");

    return 0;
}



