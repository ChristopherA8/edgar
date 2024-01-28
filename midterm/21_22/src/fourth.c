#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char string[11];
    printf("Enter a string > ");
    fgets(string, 11, stdin);

    int beginning = 1;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] != ' ' && beginning) {
            string[i] = toupper(string[i]);
            beginning = 0;
        } else if (string[i] == ' ') {
            string[i - 1] = toupper(string[i - 1]);
            beginning = 1;
        }
  
        if ((i == strlen(string) - 1) && string[i] != ' ') {
            string[i] = toupper(string[i]);
        }
    }

    printf("Result: %s", string);

    return 0;
}