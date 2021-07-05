#include <stdio.h>

long long int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
a:
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("Sorry! I can Calculate upto 20! only, Try Again\n");
        goto a;
    }

    printf("Factorial of %d is %lld", n, factorial(n));
}