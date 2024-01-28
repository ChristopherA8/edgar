#include <stdio.h>

int main() {

    int size;
    printf("Enter an array length > ");
    scanf("%d", &size);

    while (size < 5 || size > 10) {
        printf("Enter an array length > ");
        scanf("%d", &size);
    }

    int array[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int largest = array[0], largestIndex = 0;
    for (int i = 0; i < size; i++) {
        if (largest < array[i]) {
            largest = array[i];
            largestIndex = i;
        }
    }

    int smallest = array[0], smallestIndex = 0;
    for (int i = 0; i < size; i++) {
        if (smallest > array[i]) {
            smallest = array[i];
            smallestIndex = i;
        }
    }

    int temp = array[smallestIndex];
    array[smallestIndex] = array[largestIndex];
    array[largestIndex] = temp;

    printf("Result:");

    for (int i = 0; i < size; i++) {
        printf(i == (size - 1) ? " %d" : " %d,", array[i]);
    }

    return 0;
}