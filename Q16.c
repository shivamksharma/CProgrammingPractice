#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Cubes of numbers from %d to %d:\n", start, end);
    for (i = start; i <= end; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }

    return 0;
}

