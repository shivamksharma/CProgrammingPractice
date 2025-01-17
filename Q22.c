#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    
    printf("Enter the number of prime numbers to display: ");
    scanf("%d", &n);

    printf("The first %d prime numbers are:\n", n);

    
    while (count < n) {
        int isPrime = 1; 

        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        
        if (isPrime) {
            printf("%d ", num);
            count++; 
        }

        num++; 
    }

    printf("\n"); 

    return 0;
}

