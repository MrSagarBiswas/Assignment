#include <stdio.h>

int main()
{
    int n;
    int *ptr = &n;
    printf("Enter a Number: ");
    scanf("%d", ptr);
    printf("Address of %d is %d\n", n, ptr);
}