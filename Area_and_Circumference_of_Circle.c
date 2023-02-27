#include <stdio.h>

void main()
{
    float radius, area, cf;

    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("\nThe area of Circle is : %f", area);

    cf = 2 * 3.14 * radius;
    printf("\nThe Circumference of Circle is : %f", cf);
}
