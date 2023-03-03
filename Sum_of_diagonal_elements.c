#include <stdio.h>

void main()
{
    int i, j, k, matrix[10][10], sum = 0, m, n;

    printf("Enter no. of rows and columns in matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter matrix:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix is:-\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d	", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Sum of diagonal is = %d	", sum);
}
