#include <stdio.h>

int main() {

  int oneCounter = 0;

  int input;
  printf("Enter a natural number > ");
  scanf("%d", &input);

  printf("Result:");

  while (oneCounter < 3) {
    if (input == 1) oneCounter++;
    printf(oneCounter == 3 ? " %d" : " %d,", input);
    if (input % 2 == 0) {
      input = input / 2;
    } else {
      input = 3 * input + 1;
    }
  }

  return 0;
}