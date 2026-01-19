#include <stdio.h>

int main()
{
    int n, b;
    printf("Enter a number and the base to convert it into\n");
    scanf("%d %d", &n, &b);
    int num = n;
    int rem;
    int sum = 0;
    while (num > 0)
    {
        rem = num % b;
        sum = sum * 10 + rem;
        num = num / b;
    }
    int rev = 0;
    while (sum > 0)
    {
        rev = rev * 10 + sum % 10;
        sum = sum / 10;
    }
    printf("%d in base %d is %d\n", n, b, rev);
    return 0;
}
