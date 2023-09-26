#include <stdio.h>

int main() {
	int i;
	printf("Even numbers between 1 to 10 (inclusive):\n");
	for (i = 1; i <= 10; i++)
	{
		if(i%2 == 0)
		{
		  printf("%d ", i);
		}
	}
	return 0;
}
