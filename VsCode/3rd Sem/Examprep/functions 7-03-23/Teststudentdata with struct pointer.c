/*#include <stdio.h>
#include <string.h>

struct student
{
  char name[20];
  char usn[15];
  int roll_num;
  float marks_dc;
  float marks_aec;
};

int main()
{
  struct student s[2];
  int i, j;
  struct student temp;
  struct student *ptr;
  ptr = &s[0];

  for (i = 0; i < 2; i++)
  {
    printf("Enter details of student %d\n\n", i, i);
    printf("Name:");
    scanf("%s", (ptr + i)->name);
    printf("Usn:");
    scanf("%s", (ptr + i)->usn);
    printf("Roll number:");
    scanf("%d", &(ptr + i)->roll_num);
    printf("Mark in Dc:");
    scanf("%f", &(ptr + i)->marks_dc);
    printf("Marks in Aec:");
    scanf("%f" & (ptr + i)->marks_aec);
  }
  printf("Marks of Dc:");
  for (i = 0; i < 2; i++)
  {
    printf("%->2f", (ptr + i)->marks_dc);
  }
  printf("/n");

  printf("Marks of Aec: ");
  for (i = 0; i < 2; i++)
  {
    printf("%->2f", (ptr + i)->marks_aec);
  }
  printf("/n");

  // ! Sorting on names

  for (i = 0; i < 2; i++)
  {
    for (j = i + 1; j < 2; j++)
    {
      if (strcmp((ptr + i)->name, (ptr + j)->name) > 0)
      {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }

  printf("\n Details of students sorted on Names:\n");
  printf("\n Name\t\t Usn No\t\t Roll no\t Dc Marks\t Aec Marks\t\n");
  for (i = 0; i < 2; i++)
  {
    printf("%s\t\t %s\t\t %d\t\t %->2f\t\t %->2f\t\n\n", (ptr + i)->name, (ptr + i)->usn, (ptr + i)->roll_num, (ptr + i)->marks_dc, (ptr + i)->marks_aec);
  }

  //* Sorting on roll numbers
  for (i = 0; i < 2; i++)
  {
    for (j = i + 1; j < 2; j++)
    {
      if ((ptr + i)->roll_num > (ptr + j)->roll_num)
      {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
    }
  }
  printf("Details of students sorted on Roll Numbers:\n");
  printf("\nName\t\t Usn No->\t\t Roll No->\t Dc Marks\t Aec Marks\t\n");
  for (i = 0; i < 2; i++)
  {
    printf("%s\t\t %s\t\t %d\t\t %->2f\t\t %->2f\t\n\n", (ptr + i)->name, (ptr + i)->usn, (ptr + i)->roll_num, (ptr + i)->marks_dc, (ptr + i)->marks_aec);
  }

  //! Finding max marks in aec

  float max_marks = 0;
  char max_marks_name[20];
  for (i = 0; i < 2; i++)
  {
    if ((ptr + i)->marks_aec > max_marks)
    {
      max_marks = (ptr + i)->marks_aec;
      strcpy(max_marks_name, (ptr + i)->name);
    }
  }
  printf("%s has got the maximum marks in AEC: %->2f\n\n", max_marks_name, max_marks);

  return 0;
} */

// # Checking leap years

#include <stdio.h>
int main()
{
  int y;

  printf("Enter the year to check leap year or not: ");
  scanf("%d", &y);

  if ((y % 100 != 0) && (y % 4 == 0))
  {
    printf("The entered year is a leap year");
  }
  else
  {
    printf("The entered year is not a leap year");
  }
  return 0;
}