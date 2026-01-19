#include <stdio.h>
int main()
{
    printf("Enter the values of a, b \n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Enter the value of n\n");
    int n;
    scanf("%d", &n);
    int i = n;
    while ((i % a != 0) && (i % b != 0))
    {
        i++;
    }
    printf("The smallest integer greater than or equal to %d is %d i.e divisible by both a and b", n, i);
    return 0;
}