#include <stdio.h>

int main() {

    int rows, columns;
    printf("Enter dimensions: \n");
    scanf("%d %d", &rows, &columns);

    if (rows != columns) {
        printf("Dimensions do not match a square matrix!\n");
        return 0;
    }

    int array[rows][columns];

    printf("Enter array members: \n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Matrix selected: \n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }

    // sum of squares (main diagonal)
    int diagonalSum;
    for (int i = 0; i < rows; i++) {
        diagonalSum += array[i][i] * array[i][i];
    }

    // sum of squares (side diagonal)
    int sideSum;
    for (int i = 0; i < rows; i++) {
        sideSum += array[i][(columns - 1) - i] * array[i][(columns - 1) - i];
    }
    
    // difference
    printf("Difference of sums is %d.", diagonalSum - sideSum);

   return 0;
}