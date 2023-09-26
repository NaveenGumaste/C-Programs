#include <stdio.h>

int main()
{
    int i, j;
    FILE *fp;

    fp = fopen("tables.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    for (i = 2; i <= 5; i++)
    {
        fprintf(fp, "Multiplication Table for %d:\n", i);
        for (j = 1; j <= 12; j++)
        {
             printf("%d*%d=%d\n\n", i, j, j * i);

            fprintf(fp, "%d x %d = %d\n", i, j, j * i);
        }
        fprintf(fp, "\n\n");
    }

    fclose(fp);
    printf("Tables have been written to the file 'tables.txt'\n");

    return 0;
}
