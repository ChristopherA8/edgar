#include <stdio.h>

int main() {

    int dimension;
    printf("Enter dimensions of array: ");
    scanf("%d", &dimension);

    int array[dimension][dimension];
    printf("Enter elements of array: ");
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            scanf("%d", array[i][j]);
        }
    }

    return 0;
}