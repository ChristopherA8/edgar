#include <stdio.h>

int main() {

    int length;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &length);

    int array[length];
    printf("\nEnter the elements of the array (%d):", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }

    int newValue, newIndex;
    printf("\nEnter the value of the new element and the index: ");
    scanf("%d %d", &newValue, &newIndex);

    printf("\nInitial array\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Calculate new array
    int newArray[length];
    for (int i = 0; i < length; i++) {
        if (i < newIndex) {
            newArray[i] = array[i];
            continue;
        } else if (i == newIndex) {
            newArray[i] = newValue;
        } else {
            newArray[i] = array[i - 1];
        }
    }

    printf("New array\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    return 0;
}

// stdin: 4 1 2 3 4 12 2