#include <stdio.h>

int main()
{
    int i, size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter elements of first array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Elements of second array: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}
