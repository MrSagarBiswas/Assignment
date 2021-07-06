#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the Starting Two Values for Fibonacci series: ");
    scanf("%d %d", &a, &b);
    printf("Series is: ");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", a);
        int tmp = a;
        a = b;
        b = tmp + b;
    }
}
