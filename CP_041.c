/* Program to Add Two Integers using Function */

#include <stdio.h>                                           // FUNCTION DECLARATION
    
    int sum(int a, int b);
    int main()
{
        int num1, num2, total = 0;
        printf("\n Enter the first number: ");
        scanf("%d", &num1);
        printf("\n Enter the second number: ");
        scanf("%d", &num2);
        total = sum(num1, num2);                             // FUNCTION CALL
        printf(" Total = %d\n", total);
        return 0;
} 
                                                            // FUNCTION DEFINITION
            int sum (int a, int b)                                      // FUNCTION HEADER
        { 
                int result;
                result = a + b;
                return result;
        }
