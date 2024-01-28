#include <stdio.h>

int main() {

    int size;
    printf("Enter the dimension of the matrix > ");
    scanf("%d", &size);

    int array[size][size];
    printf("Enter the elements of the matrix > ");
    for (int row = 0; row < size; row++) {
        for (int column = 0; column < size; column++) {
            scanf("%d", &array[row][column]);
        }
    }

    int new[size + 1][size + 1];
    for (int row = 0; row < size; row++) {
        for (int column = 0; column < size + 1; column++) {
            new[row][column] = array[row][column];
            if (column == size) {
                new[row][column] = 9;
            } 
            
        }
    }

    printf("New matrix:\n");
    for (int row = 0; row < size; row++) {
        int sum = 0;
        for (int column = 0; column < size + 1; column++) {
            if (column < size) {
                sum = sum^new[row][column];
                printf("%d ", new[row][column]);
            }
            if (column == size) {
                printf("%d ", sum ^ 1);
            }
        }
        printf("\n");
    }
    /*
        [
            [1, 0],
            [0, 1],
            [?, ?]
        ]

        [
            [1, 0],
            [0, 1]
        ]
    */


    return 0;
}
