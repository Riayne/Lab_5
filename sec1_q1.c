#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if (age > 0)
     {
        if (age > 0 && age <= 12 )
        {
            printf("Child");
        }
        else if (age > 12 && age<18 )
        {
            printf("Teenager");
        }
        else if (age >= 18 && age < 60)
        {
            printf("Adult");
        }
        else if (age > 60)
        {
            printf("Senior");
        }
    else
    {
        printf("Age not valid");
    }
     }
     return 0;
}