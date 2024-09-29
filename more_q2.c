#include <stdio.h>
int main()
{
    int assi,atten,exam,final;
    printf("Enter your assignment scores out of 30: ");
    scanf("%d",&assi);
     printf("Enter your attendace percentage out of 30: ");
    scanf("%d",&atten);
     printf("Enter your exam result out of 40: ");
    scanf("%d",&exam);

    final = exam+assi+atten;
    if (final > 0 && final<100)
    {
        if (final < 50)
        {
            printf("fail");
        }
        else if (final >= 50 && final < 60)
        {
            printf("c");
        }
        else if (final >= 60 && final < 75)
        {
            printf("b");
        }
        else if (final >= 75)
        {
            printf("a");
        }
        return 0;
    }
}