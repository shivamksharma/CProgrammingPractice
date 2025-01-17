#include <stdio.h>

int main() {
    int start = 1, end = 50;
    
    printf("Enter the starting number:\n");
    scanf("%d", &start);
    printf("Enter the ending number:\n");
    scanf("%d", &end);

    printf("Multiplication Tables from %d to %d\n", start, end);

    for (int i = start; i <= end; i++) {
        printf("\nTable of %d:\n", i);
        for (int j = 1; j <= 10; j++) { 
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}

