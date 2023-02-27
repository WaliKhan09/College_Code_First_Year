// #include<stdio.h>

// int main(){

//     int num1, num2;

//     printf("Enter the first number : ");
//     scanf("%d",&num1);
//     printf("Enter the second number : ");
//     scanf("%d",&num2);

//     if (num1 == num2)
//     {
//         printf("Entered numbers are equal.");
//     }
//     else
//     {
//         printf("Entered numbers are not equal.");
//     }

// }

// #include <stdio.h>

// main() {
//     char operation;
//     int a, b;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf("%c", &operation);
//     printf("Enter two operands: ");
//     scanf("%d %d",&a, &b);

//     switch(operation)
//     {
//         case '+':
//             printf("%d + %d = %d",a, b, a+b);
//             break;

//         case '-':
//             printf("%d - %d = %d",a, b, a-b);
//             break;

//         case '*':
//             printf("%d * %d = %d",a, b, a*b);
//             break;

//         case '/':
//             printf("%d / %d = %d",a, b, a/b);
//             break;

//         default:
//             printf("Error!");
//     }
// }

#include <stdio.h>

// // 1

// main(){
//     int a, b = 0;

//     printf("Enter a number : ");
//     scanf("%d",&a);

//     for (int i = 0; i <= a; i++)
//     {
//         b = b + i;
//     }
//     printf("%d\n",b);
// }

// // 2

// main()
// {
//     int n, i, fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("Factorial of %d is: %d", n, fact);
// }

// // 3

// main()
// {
//     int n, i, Even_Sum = 0, Odd_Sum = 0;

//     printf("\n Enter the value : ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             Even_Sum = Even_Sum + i;
//         }
//         else
//         {
//             Odd_Sum = Odd_Sum + i;
//         }
//     }
//     printf("\n Sum of Even Numbers = %d", Even_Sum);
//     printf("\n Sum of Odd Numbers = %d", Odd_Sum);
// }

// // 4

// main()
// {
//     int a = 0, b = 1, c, i, num;
//     printf("Enter the number of elements:");
//     scanf("%d", &num);
//     printf("%d %d", a, b);
//     for (i = 2; i < num; ++i)
//     {
//         c = a + b;
//         printf(" %d", c);
//         a = b;
//         b = c;
//     }
// }

// // 5

// main()
// {
//     int n, i, c = 0;
//     printf("Enter a number:");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             c++;
//         }
//     }

//     if (c == 2)
//     {
//         printf("Is a Prime number");
//     }
//     else
//     {
//         printf("Is not a Prime number");
//     }

// }

// // 6

main()
{
    int n;
    int sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("%d",sum);
}
