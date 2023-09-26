#include <stdio.h>
#include <math.h>

int main()
{
    int choice, num, i, flag;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Check if a number is even or odd\n");
        printf("2. Check if a year is a leap year\n");
        printf("3. Check if a number is a prime number\n");
        printf("4. Check if a number is a multiple of 5\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("%d is an even number\n", num);
                else
                    printf("%d is an odd number\n", num);
                break;

            case 2:
                printf("Enter a year: ");
                scanf("%d", &num);

                if (num % 400 == 0 || (num % 4 == 0 && num % 100 != 0))
                    printf("%d is a leap year\n", num);
                else
                    printf("%d is not a leap year\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                flag = 1;

                for (i = 2; i <= sqrt(num); i++)
                {
                    if (num % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                }

                if (flag == 1)
                    printf("%d is a prime number\n", num);
                else
                    printf("%d is not a prime number\n", num);
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 5 == 0)
                    printf("%d is a multiple of 5\n", num);
                else
                    printf("%d is not a multiple of 5\n", num);
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice, try again\n");
        }
    }
    return 0;
}
