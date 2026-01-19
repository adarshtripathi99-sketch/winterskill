#include <stdio.h>

int main() 
{
    printf("Menu driven  \n");
    printf("1. addition of two numbers\n");
    printf("2. division of two numbers\n");
    printf("3. multiplication of two numbers\n");
    printf("4. subtraction of two numbers\n");
    int i;
    scanf("%d", &i);
    switch(i)
    {
        case 1:printf("Enter the two numbers: ");
            double a,b; 
            scanf("%lf %lf", &a, &b);
            printf("%lf", a+b);
            break;
        case 2:printf("Enter the no. being divided and the divisor, respectively: ");
            double c,d;
            scanf("%lf %lf", &c, &d);
            if (d==0)
            {
                printf("Error ; DIVISION BY 0 IS NOT ALLOWED");
                break;
            }
            printf("%lf", c/d);
            break;
        case 3:printf("Enter the two numbers: ");
            double e,f;
            scanf("%lf %lf", &e, &f);
            printf("%lf", e*f);
            break;
        case 4:printf("Enter the two numbers: ");
            double g,h;
            scanf("%lf %lf", &g, &h);
            printf("%lf", g-h);
            break;
            default:
                printf("Invalid choice therefore no operation performed");
                break;
    }
    return 0;
}
