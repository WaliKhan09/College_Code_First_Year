#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("\na and b are equal.");
    }
    else
    {
        printf("\na and b are not equal.");
    }
}
