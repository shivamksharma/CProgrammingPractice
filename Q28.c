#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    i = start;

    printf("Odd numbers between %d and %d are:\n", start, end);

    while (i <= end) {
        if (i % 2!= 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
