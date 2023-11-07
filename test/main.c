#include <stdio.h>

int main() {

	int input = 124;

	printf("Input: %d\n", input);

	int evenSum = 0, oddSum = 0;

	while(input) {

		// If number is odd
		if ((input % 10) % 2) {
			oddSum += (input % 10);
		} else { // If it's even
			evenSum += (input % 10); 
		}

		input /= 10;
	}

	printf("Sum of even digits: %d\nSum of odd digits: %d", evenSum, oddSum);


	return 0;
}
