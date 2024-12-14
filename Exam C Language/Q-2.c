#include <stdio.h>
#define ROWS 3
#define COLS 3
float calAvg(int arr[ROWS][COLS], int rows, int cols) {
    int sum = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return (float)sum / totalElements;
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    float avg = calAvg(arr, ROWS, COLS);
    printf("The average of all elements in the 2D array is: %.2f\n", avg);
}
