#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    if (a > b)
    {
        if (a > c)
        {
            printf("The greatest number is %d", a);
        }
        else
        {
            printf("The greatest number is %d", c);
        }
    }
    else if (b > c)
    {
        printf("The greatest number is %d", b);
    }
    else
    {
         printf("The greatest number is %d", c);
    }
    return 0;
}