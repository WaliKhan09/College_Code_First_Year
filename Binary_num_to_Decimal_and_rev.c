#include <stdio.h>
#include <math.h>

int convert_to_decimal(int n);
int convert_to_binary(int n);

void main()
{
    int a, b;
    printf("Enter a binary number : ");
    scanf("%d", &a);
    printf("Enter a decimal number : ");
    scanf("%d", &b);
    printf("Binary %d in decimal is : %d", a, convert_to_decimal(a));
    printf("\nDecimal %d in binary is : %d", b, convert_to_binary(b));
}

int convert_to_decimal(int n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int convert_to_binary(int n)
{
    int bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}
