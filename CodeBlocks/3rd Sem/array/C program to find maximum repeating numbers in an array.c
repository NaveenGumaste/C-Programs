#include <stdio.h>
int numToRepeatMax(int* arr1 , int n, int k)
{
    int mx = arr1[0], result = 0;
	for (int i = 0; i< n; i++)
        arr1[arr1[i]%k] += k;

    for (int i = 1; i < n; i++)
    {
        if (arr1[i] > mx)
        {
            mx = arr1[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int arr1[] = {2, 3, 3, 5, 3, 4, 1, 7, 7, 7, 7};
    int n = sizeof(arr1)/sizeof(arr1[0]);
	int i;
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
		{
			printf("%d  ", arr1[i]);
		}
	printf("\n");
    int k = 8;
    printf("The maximum repeating number is: %d", numToRepeatMax(arr1, n, k));
    return 0;
}
