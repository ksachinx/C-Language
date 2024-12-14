#include <stdio.h>

// Function to calculate the cube of an element
int cubes(int *element)
{
    return (*element) * (*element) * (*element);  // Return the cube of the element
}

void main()
{
    int rows, cols, i, j;

    // Input rows and columns
    printf("Enter row count: ");
    scanf("%d", &rows);
    printf("Enter column count: ");
    scanf("%d", &cols);

    // Declare a 2D array
    int a[rows][cols];

    // Input elements into the array
    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("element [%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Output the cubes of all elements
    printf("\nCubes of all elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", cubes(&a[i][j]));  // Call cubes() and print the result
        }
        printf("\n");
    }
}
