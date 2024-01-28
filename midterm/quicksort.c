#include <stdio.h>

void quicksort(int array[], int first, int last) {
    if (first < last) {
        int pivot = last, i = first, j = last;
        while (i < j) {
            if (array[i] <= array[pivot] && i < last) {
                i++;
            }
            if (array[j] > array[pivot]) {
                j--;
            }
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
        int temp = array[pivot];
        array[pivot] = array[j];
        array[j] = temp;
        quicksort(array, 0, j - 1);
        quicksort(array, j + 1, last);
    }
}

int main() {

    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}