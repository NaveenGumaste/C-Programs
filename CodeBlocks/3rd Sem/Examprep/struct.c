#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no ,age;
    char name , address, usn;
};

int main()
{
    struct student [20];
    int i , temp;
    printf("Enter the name of the student");
    scanf("%s",&student.name);
    printf("Enter the age of the student");
    scanf("%d",&student.age);
    printf("Enter the Roll no. of the student");
    scanf("%d",&student.roll_no);
    printf("Enter the USN of the student");
    scanf("%s",&student.usn);
    printf("Enter the address of the student");
    scanf("%s",&student.address);
    {
        for (i=0;i<5;i++)
        {
            printf("%s\t",student.name);
            printf("%d\t",student.age);
            printf("%d\t",student.roll_no);
            printf("%d\t",student.usn);
            printf("%s\t",student.address);
        }
        printf("Sorting based on name");
        for(i=0;i<5;i++)
        {
        temp = student.name[i];
        student.name[i] = student.name[i]+1;
        student.name[i]=temp;
        }
        printf("Sorting based on Roll no");
        for(i=0;i<5;i++)
        {
        temp = student.roll_no;
        roll_no = roll_no;
        roll_no = temp;
        }
        return 0;
    }
}

