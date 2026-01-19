#include <stdio.h>
int main()
{
    char n[30];
    printf("Enter a number: ");
    scanf("%s", n);
    for (int i = 0; n[i] != '\0'; i++)
    {
        printf("Digit %d : %c\n", i + 1, n[i]);
    }
    return 0;
}