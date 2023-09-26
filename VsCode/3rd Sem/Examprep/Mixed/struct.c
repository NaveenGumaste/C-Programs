// #include <stdio.h>
// #include <string.h>

// struct employee
// {
//   char name[30];
//   int age;
//   float salary;
// };

// int main()
// {

//   struct employee emp[100];

//   int i, n;

//   printf("Enter the number of employees: ");
//   scanf("%d", &n);

// ? Storing information of all employees
//   for (i = 0; i < n; ++i)
//   {
//     printf("\nEmployee %d\n", i + 1);

//     printf("Name: ");
//     scanf("%s", emp[i].name);

//     printf("Age: ");
//     scanf("%d", &emp[i].age);

//     printf("Salary: ");
//     scanf("%f", &emp[i].salary);
//   }

// ! Sorting the employee records based on salary
//   struct employee temp;

//   for (i = 1; i < n; ++i)
//   { // Sorting in ascending order

//     for (int j = 0; j < n - 1; ++j)
//     {

//       if (emp[j].salary > emp1[j + 1].salary)
//       {

//         temp = emp[j]; // Swapping the records

//         emp[j] = emp[j + 1];

//         emp[j + 1] = temp;
//       }
//     }
//   }

//   printf("\nEmployee Details (Sorted by Salary): \n"); // Printing the sorted records

//   for (i = 0; i < n; ++i)
//   {
//     printf("Name: %s\tAge: %d\tSalary: %.2f \n", emp[i].name, emp[i].age, emp[i].salary);
//   }
//   return 0;
// }

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
  printf("\nSort based on Roll No\n");
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
  printf("\nSort based on Name\n");
  for (int i = 0; i < len; i++)
  {
    printf("Name: %s\nAddress: %s\nUSN: %s\nRoll No: %d\n\n", students[i].name, students[i].address, students[i].USN, students[i].roll_no);
  }
}