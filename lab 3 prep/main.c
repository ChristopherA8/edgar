#include <stdio.h>

int main() {

    int dimension;
    printf("Enter dimensions of array: ");
    scanf("%d", &dimension);

    int array[dimension][dimension];
    int transpose[dimension][dimension];
    int reverseRow[dimension][dimension];
    printf("Enter elements of array: ");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Transpose matrix
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    // Reverse columns
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            reverseRow[i][dimension - j - 1] = transpose[i][j];
        }
    }

    printf("\nCalculated array:\n");

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            printf("%d ", reverseRow[i][j]);
        }
        printf("\n");
    }
	
    return 0;
}