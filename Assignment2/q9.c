#include <stdio.h>

int main() 
{
    int n1,n2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1,&n2);
    printf("Common digits: \n");
    while (n1>0&&n2>0) 
    {
     if(n1%10==n2%10)  
     printf("%d ",n1%10);     
     n1=n1/10;
     n2=n2/10;     
    }
    return 0;
}
