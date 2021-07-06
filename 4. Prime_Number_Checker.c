#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("Number %d is neither prime nor composite number", a);
        return 0;
    }
    else if (a == 0)
    {
        printf("Number %d is a composite number", a);
        return 0;
    }

    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("Number %d is composite number", a);
            return 0;
        }
    }

    printf("Number %d is a prime number", a);
}
