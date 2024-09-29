#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if ((num % 3 == 0) && (num % 5 == 0) )
    {
        printf("Divisible by 3 and 5");
    }
    else
    {
        printf("Not divisible by 5 and 3");
    }
    return 0;
}