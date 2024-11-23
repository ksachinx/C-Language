#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter  row : ");
    scanf("%d", &row);
    printf("Enter  column : ");
    scanf("%d", &col);

    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int large = array[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > large)
            {
                large = array[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", large);
    return 0;
}
