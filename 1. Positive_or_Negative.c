#include<stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("The entered number %d is a POSITIVE number", num);
    }
    else
    {
        printf("The entered number %d is a NEGATIVE number", num);
    }
}
