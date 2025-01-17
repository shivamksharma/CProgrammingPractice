// WAP to get the factorial of a given number

#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");

    } else {
        printf("%d! = ", num);

        for (int i = num; i >= 1; i--) {
            printf("%d", i);

            if (i > 1) {
                printf("x");

            }

            factorial *= i;
        }

        printf(" = %d\n", factorial);

    }

    return 0;

}

