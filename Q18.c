#include <stdio.h>

int main() {
    long long int num, reversed = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    
    while (num != 0) {
        remainder = num % 10;          
        reversed = reversed * 10 + remainder; 
        num /= 10;                    
    }

    
    printf("Reversed number: %lld\n", reversed);

    return 0;
}
