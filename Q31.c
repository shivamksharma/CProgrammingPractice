#include <stdio.h>

int main() {
    int start, end, i, j, count;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Composite numbers between %d and %d are:\n", start, end);

    i = start; 
    do {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count > 2) {
            printf("%d\n", i);
        }

        i++;
    } while (i <= end);

    return 0;
}

