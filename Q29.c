#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    i = start;

    printf("Even numbers between %d and %d are:\n", start, end);

    do {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    } while (i <= end);

    return 0;
}

