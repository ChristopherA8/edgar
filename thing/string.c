

#include <stdio.h>
#include <string.h>

int main() {

    char string1[50];
    char string2[5];
    printf("Enter string 1 > ");
    fgets(string1, 50, stdin);
    // gets(string1);
    // for (int i = 0; i < 50; i++) {
    //     scanf("%c", &string1[i]);
    //     if (string1[i] == '\n') {
    //         string1[i] = '\0';
    //         break;
    //     }
    // }
    printf("Enter string 2 > ");
    scanf("%s", string2);

    for (int i = 0; i < strlen(string2); i++) {
        char num = string2[i];
        for (int j = 0; j < strlen(string1); j++) {
            if (string1[j] == num) {
                switch (string1[j]) {
                    case '0':
                        string1[j] = 'A';
                        break;
                    case '1':
                        string1[j] = 'B';
                        break;
                    case '2':
                        string1[j] = 'C';
                        break;
                    case '3':
                        string1[j] = 'D';
                        break;
                    case '4':
                        string1[j] = 'E';
                        break;
                    case '5':
                        string1[j] = 'F';
                        break;
                    case '6':
                        string1[j] = 'G';
                        break;
                    case '7':
                        string1[j] = 'H';
                        break;
                    case '8':
                        string1[j] = 'I';
                        break;
                    case '9':
                        string1[j] = 'J';
                        break;
                    
                    default:
                        break;
                }
            }
        }
    }

    printf("New string 1 = ");
    for (int i = 0; i < strlen(string1); i++) {
        printf("%c", string1[i]);
    }

    return 0;
}