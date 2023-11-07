#include <stdio.h>

int main() {

    // Read length
    int length;
    printf("Enter length of array: ");
    scanf("%d", &length);

    // Read elements
    int array[length];
    printf("Enter array elements: ");
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }

    int newArray[length];
    int sum;

    for (int i = 0; i < length; i++) {
        newArray[i] = array[i];
        sum = 0;
        for (int j = i + 1; j < length; j++) {
            sum += array[j];
        }
        newArray[i] += sum;
    }

    printf("\nCalculated array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");

   return 0;
}









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