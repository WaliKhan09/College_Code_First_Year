#include <stdio.h>

void main()
{
    int year;

    printf("Enter a Year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 || year % 400 == 0) && year % 100 != 0)
    {
        printf("\nYear is leap year.");
    }
    else
    {
        printf("\nYear is not leap year.");
    }
}
