// WAP to nCr (n choose r) assert n >= r >= 0

#include <stdio.h>

unsigned long int factorial(unsigned int n) {
  return (n == 0) ? 1 : n * factorial(n - 1);
}

unsigned long int ncr(unsigned int n, unsigned int r) {
  return factorial(n) / (factorial(n - r) * factorial(r));
}

int main() {
  unsigned int n, r;

  printf("Enter n and r (space separated): ");
  scanf("%d %d", &n, &r);

  printf("nCr for n = %d and r = %d is %d", n, r, ncr(n, r));

  return 0;
}
