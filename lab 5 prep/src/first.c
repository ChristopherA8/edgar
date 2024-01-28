#include <stdio.h>

int divisor(int a, int b) {

  int gcd;

  for (int i = 1; i <= a && i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  return gcd;
}

void reduce(int num, int den) {

  int gcd = divisor(num, den);
  int reducedNum, reducedDen;

  for (int i = 0; i < num; i++) {
    if (i * gcd == num) {
      reducedNum = i;
    }
  }

  for (int i = 0; i < den; i++) {
    if (i * gcd == den) {
      reducedDen = i;
    }
  }

  if (reducedDen == 1) {
    printf("Reduced: %d", reducedNum);
    return;
  }

  printf("Reduced: %d/%d", reducedNum, reducedDen);
}

int main() {

  int num, den;
  printf("Input the numerator and denominator: ");
  scanf("%d %d", &num, &den);
  printf("Fraction: %d/%d\n", num, den);

  reduce(num, den);

  return 0;
}