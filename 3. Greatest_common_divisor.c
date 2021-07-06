#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a == 0 || b == 0)
    {
        printf("Error! You Entered 0.\n");
        return 0;
    }
    else if (a < 0 || b < 0)
    {
        printf("Error! You Entered a negative number.\n");
        return 0;
    }
    
    int gcd;
    for(int i=1; i<=a && i<=b; ++i)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }

    printf("Greatest Common Divisor among %d and %d is: %d", a, b, gcd);
}
