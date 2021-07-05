#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Before Swapping a = %d, b = %d\n", a, b);

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    printf("After Swapping a = %d, b = %d\n", a, b);
    return 0;
}