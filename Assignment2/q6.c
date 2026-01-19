#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev=0;
    int num=n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }if(num==rev){
        printf("palindrome\n");
    }else{
        printf("not a palindrome\n");
    }
    return 0;
}