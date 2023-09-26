#include <stdio.h>
#include <string.h>

struct details
{
  int roll_no;
  char name[10], address[100], USN[10];
};

int main()
{
  printf("Enter number of students: ");
  int len;
  scanf("%d", &len);
  struct details students[len], temp;
  for (int i = 0; i < len; i++)
  {
    printf("Enter %d Name,Address,USN,Roll No: ", i + 1);
    scanf("%s %s %s %d", &students[i].name, &students[i].address, &students[i].USN, &students[i].roll_no);
  }
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (students[i].roll_no < students[j].roll_no)
      {
        temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }
  printf("\nSorting based on Roll No\n");
  for (int i = 0; i < len; i++)
  {
    printf("Name: %s\nAddress: %s\nUSN: %s\nRoll No: %d\n\n", students[i].name, students[i].address, students[i].USN, students[i].roll_no);
  }

  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (strcmp(students[i].name, students[j].name) < 0)
      {
        temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }
  printf("\nSorting based on Name\n");
  for (int i = 0; i < len; i++)
  {
    printf("Name: %s\nAddress: %s\nUSN: %s\nRoll No: %d\n\n", students[i].name, students[i].address, students[i].USN, students[i].roll_no);
  }
}
