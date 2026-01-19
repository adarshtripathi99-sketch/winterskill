#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int num = n;
    while (num > 0)
    {
        sum = sum * 10 + num % 10;
        num /= 10;
    }
    printf("The reverse of %d is %d\n", n, sum);
    if (sum == n)
        printf("The no. is a palindrome no.");
    else
        printf("The no. is not a palindrome no.");
    return 0;
}