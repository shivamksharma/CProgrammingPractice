/* Multiplication of Two Float Numbers */

#include<stdio.h>
int main(void)
{
    float num1, num2, multiplication;
    printf("Enter the First Float Number: ");
    scanf("%f", &num1);
    printf("Enter the First Float Number: ");
    scanf("%f", &num2);

    multiplication = num1 * num2;

    printf("Result of Multiplication of Two Float Number is num1 * num2 = %f\n", multiplication);

    return 0;
}

