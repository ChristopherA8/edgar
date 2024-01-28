#include <stdio.h>

int main() {

    int size;
    printf("Enter n > ");
    scanf("%d", &size);
    /*
    
    [
        [1,2,3],
        [4,5,6],
        [7,8,9]
    ]
    */

    int array[size][size];
    for (int i = 0; i < size; i++) { // row i
        for (int j = 0; j < size; j++) { // column j
            scanf("%d", &array[i][j]);
        }
    }

    printf("Result >");

    for (int i = 0; i < size; i++) { // row i
        if (i == size - 1) {
            int difference = 0;
            int sum = 0;
            int sum2 = 0;
            for (int k = 0; k < size; k++) { // column k
                sum += array[k][i]; // last
                sum2 += array[k][0]; // first
            }
            difference = sum - sum2;
            printf(" %d", difference);
            break;
        }


        int difference = 0;
        int sum = 0;
        int sum2 = 0;
        for (int k = 0; k < size; k++) {
            sum += array[k][i]; // currrent column
            sum2 += array[k][i+1]; // next column
        }
        difference = sum - sum2;
        printf(" %d", difference);
    }
   
   printf("\n");

    return 0;
}