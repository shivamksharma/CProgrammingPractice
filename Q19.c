#include <stdio.h>

int main() {
    long long int n, num, largest;

    
    printf("Enter the number of elements: ");
    scanf("%lld", &n);

    
    printf("Enter a number: ");
    scanf("%lld", &largest); 

    
    for (int i = 1; i < n; i++) {
        printf("Enter a number: ");
        scanf("%lld", &num);

        if (num > largest) {
            largest = num; 
        }
    }

    
    printf("The largest number is: %lld\n", largest);

    return 0;
}

