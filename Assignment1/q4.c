
#include <stdio.h>
int main()
{
    int age,ch;
    double decval;
    double amtpre;
    double excess;
    printf("Enter the age of the customer\n");
    scanf("%d", &age);
    printf("Enter the declared value of the car\n");
    scanf("%lf", &decval);
    printf("Type 1 if the car has been manufactured in India and 2 if not in India\n");
    scanf("%d", &ch);
    int i;
    printf("Enter the number of years for which the car hasn't had an accident counting from before the policy is sought to be issued.\n");
    scanf("%d", &i);
    if (age>=25&&ch==1&&i>=3)
    {
        amtpre=decval*0.06;
        excess=0;
        printf("A comprehensive policy will be issued to the customer\n");
        printf("The premium amount payable is %lf/-\n", amtpre);
        printf("The excess payable by the customer is %lf/-\n", excess);
    }
    else if (age>=25&&ch==2&&i>=3)
    {
        amtpre=decval*0.06;
        excess=100;
        printf("A comprehensive policy will be issued to the customer\n");
        printf("The premium amount payable is %lf/-\n", amtpre);
        printf("The excess payable by the customer is %lf/-\n", excess);
    }
    else if (age>=25&&ch==1&&i<3)
    {
        amtpre=decval*0.06;
        excess=100;
        printf("A comprehensive policy will be issued to the customer\n");
        printf("The premium amount payable is %lf/-\n", amtpre);
        printf("The excess payable by the customer is %lf/-\n", excess);
    }
    else if (age>=25&&ch==2&&i<3)
    {
        amtpre=decval*0.07;
        excess=0;
        printf("A third party policy will be issued to the customer\n");
        printf("The premium amount payable is %lf\n", amtpre);
        printf("The excess payable by the customer is %lf\n", excess);
    }
    else if (age<25&&ch==1&&i>=3)
    {
        amtpre=decval*0.06;
        excess=100;
        printf("A comprehensive policy will be issued to the customer\n");
        printf("The premium amount payable is %lf/-\n", amtpre);
        printf("The excess payable by the customer is %lf/-\n", excess);
    }
    else if (age<25&&ch==2&&i>=3)
    {
        amtpre=decval*0.08;
        excess=100;
        printf("A comprehensive policy will be issued to the customer\n");
        printf("The premium amount payable is %lf/-\n", amtpre);
        printf("The excess payable by the customer is %lf/-\n", excess);
    }
    else
    {
        printf("The customer is not eligible for a policy\n");
    }
    return 0;
}