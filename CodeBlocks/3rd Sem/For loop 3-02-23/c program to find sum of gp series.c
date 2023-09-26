#include <stdio.h>
#include <math.h>

void main()
{

    float g1,cr,i,n,j;
    float ntrm,gpn;
    float sum=0;

    printf("Input the first number of the G.P. series: ");
    scanf("%f",&g1);

    printf("Input the number or terms in the G.P. series: ");
    scanf("%f",&ntrm);

    printf("Input the common ratio of G.P. series: ");
    scanf("%f",&cr);

     printf("\nThe numbers for the G.P. series:\n ");
	 printf("%f ",g1);
	 sum=g1;

     for(j=1;j<ntrm;j++)
       {
        gpn=g1*pow(cr,j);
		sum=sum+gpn;
        printf("%f  ",gpn);
       }

    printf("\nThe Sum of the G.P. series : %f\n\n",sum);
}
