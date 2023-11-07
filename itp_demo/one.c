#include <stdio.h>

int main() {
   
   
   int input;
   printf("Enter the number > ");
   scanf("%d", &input);
   
   printf(((input < 100) && (input >= 1)) ? "is" : "is not");
   
	return 0;  
}