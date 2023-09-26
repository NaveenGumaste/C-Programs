#include <stdio.h>

int main()
{
    int cp,sp, amt;

    printf("\n Enter cost price: ");
    scanf("%d", &cp);
    printf("\n Enter selling price: ");
    scanf("%d", &sp);

    if(sp > cp)
    {
        amt = sp - cp;
        printf("\n Profit = %d \n", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("\n Loss = %d \n", amt);
    }
    else
    {
        printf("\n No Profit No Loss.\n");
    }

    return 0;
}
