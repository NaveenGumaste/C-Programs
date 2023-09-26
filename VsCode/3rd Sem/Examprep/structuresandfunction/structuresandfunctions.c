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
void struct accno(struct person s1[20]);
void struct sortname(struct person s1[20]);
int main()
{
  struct person p1[20];
  datainput(p1);
  display(p1);
  struct sortaccno(p1);
  printf("Sorted Accno\n\n");
  display(p1);
  struct sortname(p1);
  printf("Sorted Name\n\n");
  display(p1);
  return 0;
}
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
void sortaccno(struct person s1[20])
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
void sortname(struct person s1[20])
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

