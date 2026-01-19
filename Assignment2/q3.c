#include <stdio.h>
int main()
{
    int n, b1, b2;

    scanf("%d %d %d", &n, &b1, &b2);
    int num = n;
    int sum1 = 0;
    while (n > 0)
    {
        sum1 = sum1 * 10 + n % b1;
        n /= b1;
    }
    n = num;
    int sum2 = 0;
    while (n > 0)
    {
        sum2 = sum2 * 10 + n % b2;
        n /= b2;
    }
    int rev1 = 0;
    int rev2 = 0;
    while (sum1 > 0)
    {
        rev1 = rev1 * 10 + sum1 % 10;
        sum1 = sum1 / 10;
    }
    while (sum2 > 0)
    {
        rev2 = rev2 * 10 + sum2 % 10;
        sum2 = sum2 / 10;
    }
    printf("%d %d %d %d %d", num, b1, rev1, b2, rev2);
    return 0;
}