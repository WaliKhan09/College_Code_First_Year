#include <stdio.h>

void main()
{
    int a[100], i, elm, n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search:");
    scanf("%d", &elm);

    for (i = 0; i < n; i++){
        if (a[i] == elm)
            break;
    }

    if (i < n)
        printf("Element found at index %d", i);
    else
        printf("Element not found");
}
