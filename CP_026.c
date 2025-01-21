// WAP to read and display n number using an array

#include <stdio.h>
int main() {
  int i = 0, n, arr[20];
  printf("\n Enter the number of elements:");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("\n Arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  printf("\n The array elements are ");

  for (i = 0; i < n; i++)
    printf("Arr[%d] = %d\t", i, arr[i]);
  return 0;
}
