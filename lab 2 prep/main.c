#include <stdio.h>

int main() {

    int input;
    printf("Enter a number > \n");
    scanf("%d", &input);

    if (!(input % 2)) {
        printf("Invalid input!");
        return 0;
    }

    int whitespace = (input - 1) / 2; // number of spaces

    // this for loop creates this part
    /*
        *
       ***
      *****
     *******
    *********
    */
    for (int i = 0; i < (input / 2) + 1; i++) {
        for (int h = 0; h < whitespace; h++) {
            printf(" ");
        }
        
        for (int c = 0; c <= i; c++) {
            printf("*");
        }

        for (int g = 0; g <= i - 1; g++) {
            printf("*");
        }

        whitespace--;

        printf("\n");
    }


    // this loop creates
    /*
     *******
      *****
       ***
        *
    */
    int d = input - 1;

    for (int i = 0; i < (input / 2); i++) {
        for (int h = 0; h < i + 1; h++) {
            printf(" ");
        }
        
        for (int c = d - i - 1; c > 0; c--) {
            printf("*");
        }
        
        d--;

        printf("\n");
    }

   return 0;
}