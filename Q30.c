#include <stdio.h>

int main() {
    int start, end, i, j, count;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    i = start;
    while (i <= end) {
        count = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}

