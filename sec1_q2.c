#include <stdio.h>
int main()
{
    int num,rem;
    printf("Enter num: ");
    scanf("%d",&num);
    
    if (num != 0)
    {
        if (num > 0)
        {
            rem = num % 2;
            if (rem == 0)
            {
                 printf("num is positive and even");
            }
            else
            {
                printf("num is positive and odd");
            }
           
        }
        else
        {
            printf("num is negative");
        }
    
    }
    else
    {
    printf("num is zero");
    }

}