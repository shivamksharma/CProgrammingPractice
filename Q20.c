#include <stdio.h>

int main() {
    int n, target, num, count = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the number to count: ");
    scanf("%d", &target);

    
    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == target) {
            count++;
        }
    }

    
    printf("The number %d occurs %d times in the list.\n", target, count);

    return 0;
}

