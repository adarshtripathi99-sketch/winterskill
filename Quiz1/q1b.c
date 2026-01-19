#include <stdio.h>
#include <math.h>

int main() 
{
    printf("The quadratic equation is: ax^2 + bx + c = 0\n");
    double a,b,c;
    scanf("Enter the coefficients a, b and c: %lf %lf %lf", &a, &b, &c);
    double d = b*b - 4*a*c;
    if (d<0)
    {
        printf("The roots are complex");
        double r = -b/(2*a);
        double i = sqrt(-d)/(2*a);
        printf("The roots are %lf + %lfi and %lf - %lfi", r, i, r, i);
    }
    else if (d==0)
    {
        printf("The roots are real and equal");
        double r = -b/(2*a);
        printf("The root is %lf", r);
    }
    else
    {
        double r1 = (-b + sqrt(d))/(2*a);
        double r2 = (-b - sqrt(d))/(2*a);
        printf("The roots are %lf and %lf", r1, r2);
    }
    return 0;
}
