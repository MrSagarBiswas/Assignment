#include<stdio.h>

int main()
{
    float a, b;
    printf("Enter two real values to be swapped: ");
    scanf("%f %f", &a, &b);
    printf("Values Entered are a=%f and b=%f\n", a, b);

    float tmp=a;
    a=b;
    b=tmp;
    printf("Values after swap are a=%f and b=%f\n", a, b);
}