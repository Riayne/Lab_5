#include <stdio.h>

void main()
{
    int age;
    char cit;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your citizenship(p for permenant and t for temporary): ");
    scanf("%c",&cit);
    if ((age >= 18) && (cit == 'p'))
    {
        printf("you can vote");
    }
    else
    {
        printf("you cannot vote");
    }
   
}