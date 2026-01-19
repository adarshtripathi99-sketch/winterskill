#include <stdio.h>

int main()
{

    int pup=500,sales=100,opcost=10000,adcost=1000;
    int c=0;
    while((sales*pup-opcost-adcost)>0)
    {
     adcost=adcost*2;
     sales = (int)(sales*1.2);
     c++;
    }
    printf("After %d doublings, the profit begins to decline\n", c-1);
    printf("The no. of sales made are %d\n", (int)(sales/1.2));
    printf("The total ad cost is %d\n", adcost/2);
    printf("The net profit just before it begins to decline is %lf\n", (double)((sales/1.2)*pup)-opcost-(adcost/2));
    return 0;
}