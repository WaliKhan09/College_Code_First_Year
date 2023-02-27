#include<stdio.h>

int main(){

    int num1, num2, num3;

    printf("Enter the first number : ");
    scanf("%d",&num1); 
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("Enter the third number : ");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("num1 = %d, is greatest.",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("num2 = %d, is greatest.",num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("num3 = %d, is greatest.",num3);
    }
    else
    {
        printf("Entered numbers are not equal.");
    }
}
