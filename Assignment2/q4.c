#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int num=n;
    int c=0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
        c++;
    }
    printf("Number of digits in %d is %d\n", num, c);
    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}
