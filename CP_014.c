// WAP to print multiples of a number

#include <stdio.h>

int main() {
  int a, n, i = 1;

  printf("Enter a number: ");
  scanf("%d", &a);

  printf("Enter the number of multiples required: ");
  scanf("%d", &n);

  printf("%d multiples of %d :", n, a);
  while (i <= n) {
    printf("\n %d x %d = %d", a, i, a * i);
    i++;
  }

  return 0;
}
