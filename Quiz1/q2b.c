#include <stdio.h>

int main() 
{
    int i;
    int n; 
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        if (i*i>200)
        {
            break;
        }
        printf("%d, ", i*i);
    }
    printf("\n aforementioned is the series required.");
    return 0;
}
