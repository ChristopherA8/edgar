#include <stdio.h>

int main() {

    char input[150];
    scanf("%s", input);

    int hasLetters = 0;

    char new[150];

    int count = 0;

    for (int i = 0; i < 150; i++) {
        if ((input[i] >= 65 && input[i] <= 90) || (input[i] >= 97 && input[i] <= 122)) {
            hasLetters = 1;
            new[count] = input[i];
            count++;
        }
    }

    char newnew[count + 1];

    for (int i = 0; i < count + 1; i++) {
        newnew[i] = new[i];
    }

    if (hasLetters) {
        printf("\n%s", newnew);
    } else {
        printf("\nEmpty String");
    }

    

    return 0;
}