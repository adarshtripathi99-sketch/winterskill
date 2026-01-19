#include <stdio.h>

int main() 
{ float x,y,r;
    printf("Enter the value of r\n");
    scanf("%f", &r);
    printf ("The circle is  x^2 + y^2 = %f\n", r*r);
    int r1= (int)r;
    int totalintpo;
    totalintpo=((2*r1+1)*(2*r1+1));
    printf("The total number of integer points in the circle is %d\n", totalintpo);
    return 0;
}
