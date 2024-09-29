#include <stdio.h>

int main()
{
    int a , b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("your first number is now %d",a);
    printf("your second number is now %d",b);
    return 0;
}
