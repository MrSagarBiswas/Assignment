#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int n;
    printf("Number of Elemnet in Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elemnets of Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int MAX = -2147483646, MIN = 2147483647;
    for (int i = 0; i < n; i++)
    {
        MAX = maximum(arr[i], MAX);
        MIN = minimum(arr[i], MIN);
    }
    printf("The Maximum Element in Array is %d\n", MAX);
    printf("The Minimum Element in Array is %d\n", MIN);
}