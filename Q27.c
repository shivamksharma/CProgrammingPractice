#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number:\n ");
    scanf("%d", &start);
    printf("Enter the ending number:\n ");
    scanf("%d", &end);

    printf("Numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0 && i % 4==0 && i % 6==0 && i % 8==0) {
            printf("%d\n ", i);
        }
    }

    printf("\n");

    return 0;
}
