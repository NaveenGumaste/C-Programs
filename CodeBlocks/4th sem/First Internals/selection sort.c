#include <stdio.h>

void data_entry(int arr[], int n)
{
    int i;
    printf("Enter 5 numbers: \n");
    for (i = 0; i <= n; i++)
        {
        scanf("%d", &arr[i]);
    }
}

void display_array(int arr[],int n)
{
    int i;
    printf("Array elements are:\n");
    for (i = 0; i <= n; i++)
        {
        printf("%d ", arr[i]);
        }
}

int main()
{
    int n=4;

    int arr[10];
    data_entry(arr, n);
    display_array(arr, n);

    return 0;
}
