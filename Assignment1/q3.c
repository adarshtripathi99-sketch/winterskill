#include <stdio.h>

int main() 
{
    double f,c;
    printf("Enter the temperature in fahrenheit\n");
    scanf("%lf", &f);
    printf("The temperature in fahrenheit is %lf\n", f);
    c=(f-32)*5/9;
    printf("The temperature in celsius is %lf\n", c);
    return 0;
}