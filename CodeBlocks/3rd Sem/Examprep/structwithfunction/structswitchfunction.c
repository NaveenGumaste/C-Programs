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
  int choice;
  do
  {
    printf("\n\n********** MENU **********\n");
    printf("1. Enter the Data\n");
    printf("2. Display Data\n");
    printf("3. Sort by Account Number\n");
    printf("4. Sort by Name\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      datainput(p1);
      break;
    case 2:
      display(p1);
      break;
    case 3:
      structsortname(p1);
      printf("\nSorted Accno\n");
      display(p1);
      break;
    case 4:
      structsortname(p1);
      printf("\nSorted Name\n");
      display(p1);
      break;
    default:
      printf("invalid choice!!");
      break;
    }
  } while (choice);
  return 0;
}
void datainput(struct person s1[20])
{
  for (i = 0; i < n; i++)
  {
    printf(" Enter the Name :");
    scanf("%s", s1[i].name);
    printf("Enter the Accno :");
    scanf("%d", &s1[i].accno);
    printf("Enter the Salary :");
    scanf("%f", &s1[i].salary);
  }
}
void display(struct person s1[20])
{
  printf("\n\n Name \t\t Accno \t\t salary \t\n");
  for (i = 0; i < n; i++)
  {
    printf(" %s\t\t", s1[i].name);
    printf(" %d\t\t", s1[i].accno);
    printf(" %.2f\t\n", s1[i].salary);
  }
}
void structsortaccno(struct person s1[20])
{
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {

      if ((s1[i].accno > s1[i].accno))
      {
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
      }
    }
  }
}
void structsortname(struct person s1[20])
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
