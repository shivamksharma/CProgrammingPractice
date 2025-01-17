#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of terms to calculate cubes: ");
    scanf("%d", &n);

    printf("Cubes of numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }

    return 0;
}

