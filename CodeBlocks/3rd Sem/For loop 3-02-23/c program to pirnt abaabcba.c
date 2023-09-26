#include <stdio.h>

void main()
  {
   int i, j;
   char alph = 'A';
   int n,s;
   int ctr = 1;

   printf("Input the number of Letters (less than 26) in the Pyramid : ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
	{
	for(s=1;s<=n-i;s++)

	printf("  ");
      for (j = 0; j <= (ctr / 2); j++) {
         printf("%c ", alph++);
      }

      alph = alph - 2;

      for (j = 0; j < (ctr / 2); j++) {
         printf("%c ", alph--);
      }
      ctr = ctr + 2;
      alph = 'A';
      printf("\n");
   }
}
