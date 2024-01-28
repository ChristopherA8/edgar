#include <stdio.h>

int main() {

    int rows, columns; // (m rows, n columns)
    printf("Enter m > ");
    scanf("%d", &rows);

    while (rows < 0) {
        printf("Enter m > ");
        scanf("%d", &rows);
    }

    printf("Enter n > ");
    scanf("%d", &columns);

    while (columns < 0) {
        printf("Enter n > ");
        scanf("%d", &columns);
    }

    int array[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int smallest = array[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (smallest > array[i][j]) {
                smallest = array[i][j];
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i % 2 == 0) {
                if (array[i][j] >= 0) {
                    array[i][j] = 0;
                }
            } else {
                if (array[i][j] >= 0) {
                    array[i][j] = 1;
                }
            }
        }
    }

    printf("Result:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (smallest < -9) {
                printf((rows == 1) ? "%d" : ((array[i][j] < 0) ? " %d" : "   %d"), array[i][j]);
            } else {
                printf((rows == 1) ? "%d" : ((array[i][j] < 0) ? " %d" : "  %d"), array[i][j]);
            }
        }
        if (i == rows - 1) {

        } else {
            printf("\n");
        }
    }

    return 0;
}