// WAP to find HCF of two numbers

#include <stdio.h>

int hcf(int a, int b) { return (b == 0) ? a : hcf(b, a % b); }

int main() {
  int a, b;

  printf("Enter the first number  : ");
  scanf("%i", &a);

  printf("Enter the second number : ");
  scanf("%i", &b);

  printf("HCF of %i and %i is %i", a, b, hcf(a, b));

  getch();
  return 0;
}
