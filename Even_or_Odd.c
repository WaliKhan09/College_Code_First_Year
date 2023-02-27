#include <stdio.h>

void main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("\nEntered number %d  is even number.", n);
    }
    else
    {
        printf("\nEntered number %d is odd number.", n);
    }
}
