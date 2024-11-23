#include <stdio.h>
main()
{
    int row, col, i, j, sum = 0;
    printf("enter row :- ");
    scanf("%d", &row);
    printf("enter col :- ");
    scanf("%d", &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("element [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("diagonal array:-\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n ");
    }
    printf("cross array:-\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n ");
    }
    printf("boundary-diagonal\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("sum = %d\n", sum);

    printf("anti-diagonal\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("");
            }
        }
    }
    int mul=1;
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mul = mul * a[i][j];
        }
    }
    printf("mul = %d\n", mul);
}
