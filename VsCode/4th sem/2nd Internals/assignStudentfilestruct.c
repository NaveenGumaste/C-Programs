#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
  char name[50];
  int rollNo;
};

void writeStudentDetails(struct Student students[], int count)
{
  FILE *file = fopen("students.txt", "w");
  if (file == NULL)
  {
    printf("Unable to open the file.\n");
    return;
  }

  for (int i = 0; i < count; i++)
  {
    fprintf(file, "%s %d\n", students[i].name, students[i].rollNo);
  }

  fclose(file);
  printf("Student details saved successfully.\n");
}

void readStudentDetails(struct Student students[], int count)
{
  FILE *file = fopen("students.txt", "r");
  if (file == NULL)
  {
    printf("Unable to open the file.\n");
    return;
  }

  for (int i = 0; i < count; i++)
  {
    fscanf(file, "%s %d\n", students[i].name, &students[i].rollNo);
  }

  fclose(file);
  printf("Student details read successfully.\n");
}

void sortStudentDetails(struct Student students[], int count)
{
  struct Student temp;
  int i, j;

  // Sort by name
  for (i = 0; i < count - 1; i++)
  {
    for (j = 0; j < count - i - 1; j++)
    {
      if (strcmp(students[j].name, students[j + 1].name) > 0)
      {
        temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }

  i = 0;
  while (i < count)
  {
    j = i + 1;
    while (j < count && strcmp(students[i].name, students[j].name) == 0)
      j++;

    for (int start = i; start < j - 1; start++)
    {
      for (int end = i; end < j - start - 1; end++)
      {
        if (students[end].rollNo > students[end + 1].rollNo)
        {
          temp = students[end];
          students[end] = students[end + 1];
          students[end + 1] = temp;
        }
      }
    }

    i = j;
  }

  printf("Student details sorted by name and roll number.\n");
}

int main()
{
  struct Student students[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Enter details for Student %d:\n", i + 1);

    printf("Name: ");
    fgets(students[i].name, sizeof(students[i].name), stdin);

    printf("Roll No: ");
    scanf("%d", &students[i].rollNo);

    while (getchar() != '\n')
      ;

    printf("\n");
  }

  writeStudentDetails(students, 3);

  readStudentDetails(students, 3);

  sortStudentDetails(students, 3);

  printf("\n\tSorted Student Details\n\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Name: %s Roll No: %d\n", students[i].name, students[i].rollNo);
  }

  return 0;
}
