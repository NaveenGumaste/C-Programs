#include<stdio.h>

int main()
{
	int a ;


	printf("Enter the age of the person: ");
	scanf("%d",&a);


	if (a>=18)
	{
		printf("\n Eligible for voting\n");
	}
	else
	{
		printf("\n Not eligible for voting\n");
	}

	return 0;
}
