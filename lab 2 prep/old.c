#include <stdio.h>

int main() {
 
   int a, b;
   printf("Enter two natural numbers from interval [1, 1000] > ");
   scanf("%d %d", &a, &b);
   
   if ((a < 1) || (b > 1000)) {
   	printf("Numbers must be in interval [1, 1000].");
      return 0;
   } else if (b < a) {
   	printf("First number must be less than second number.");
      return 0;
   }
   
   int sum = 0;
   for (int i = a; i <= b; i++) {
      if (!((i - a + 1) % 3)) sum += i;
   }
   
   
   printf("Sum of every third number is: %d", sum);
   
   
   
   return 0;
}



#include <stdio.h>

int main() {

    int input;
    printf("Enter a number > \n");
    scanf("%d", &input);

    if (!(input % 2)) {
        printf("Invalid input!");
        return 0;
    }

    int whitespace = (input - 1) / 2;

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




#include <stdio.h>

int main() {

    int input;
    printf("Enter number of words of the nursery rhyme > ");
    scanf("%d", &input);

    if (input <= 0) {
        printf("WRONG INPUT");
        return 0;
    }

    char rhyme[3][10] = {"London", "Bridge", "Is"};

    int divide = input / 3;
    int mod = input % 3;

    for (int h = 0; h < divide; h++) {
        for (int j = 0; j < 3; j++) {
            printf("%s ", rhyme[j]);
        }
    }
    for (int i = 0; i < mod; i++) {
        printf("%s ", rhyme[i]);
    }

   return 0;
}














#include <stdio.h>

int main() {

    int input;
    printf("Enter number > ");
    scanf("%d", &input);

    if (input <= 0) {
        printf("Wrong number!");
        return 0;
    }

    int check = 0; // false if there are no divisible numbers

    int numbers[] = {2, 3, 5, 7};
    int results[] = {0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
        if (!(input % numbers[i])) {
            results[i] = 1;
            check = 1;
        }
    }

    if (check == 0) {
        printf("Number is not divisible by numbers 2, 3, 5, 7.");
    } else {
        for (int i = 0; i < 4; i++) {
            if (results[i]) {
                printf("Number is divisible by number %d.\n", numbers[i]);
            }
        }
    }

   return 0;
}