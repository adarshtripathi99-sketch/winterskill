#include <stdio.h>

int main() 
{
    int i,j;
    printf(" enter the value of i\n");
    scanf("%d", &i);
    printf(" enter the value of j\n");
    scanf("%d", &j);
    int r;
    printf(" the value of i is %d\n", i);
    r=i%j;
    i=(j-r)+i;
    printf(" the value of i after rounding off in accordance to the value of j is %d\n", i);
    printf(" the value of j is %d\n", j);
    return 0;
}