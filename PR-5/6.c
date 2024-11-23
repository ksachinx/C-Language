#include <stdio.h>
main()
{
    int row1, col2, i, j;
    printf("Enter row size: ");
    scanf("%d", &row1);
    printf("Enter  col size: ");
    scanf("%d", &col2);

    int a[row1][col2];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {

            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    int row, col;
    printf("Enter the row sum: ");
    scanf("%d", &row);
    printf("Enter the col sum: ");
    scanf("%d", &col);

     int sumrow = 0;
    for (int j = 0; j < col2; j++) {
        sumrow += a[row][j];
    }

    
    int sumcol = 0;
    for (int i = 0; i < row1; i++) {
        sumcol += a[i][col];
    }

    printf("Sum of row %d: %d\n", row, sumrow);
    printf("Sum of column %d: %d\n", col, sumcol);
}
