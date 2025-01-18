/* Factorial Program using Function */

#include<stdio.h>
int factorial(int);

int main()
{
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact=factorial(num);
    printf("Factorial of %d is: %d\n", num, fact);
    return 0;
}
int factorial(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
