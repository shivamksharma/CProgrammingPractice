/* Amicable Number Program
 * Two numbers are amicable if the first is equal to the sum of divisors of the second, 
 * and if the second number is equal to the sum of divisors of the first.
 * */


#include <stdio.h>

int areAmicable(int m, int n)
{
    int i = 0, sumM = 0, sumN = 0;
    
    while ( ++i < m )
        if (m % i == 0)
            sumM += i;
    
    i = 0;
    
    while ( ++i < n )
        if (n % i == 0)
            sumN += i;
                    
    return sumM == n && sumN == m;
}

int main()
{
    int x, y;

    printf("Enter the two numbers (space separated): ");
    scanf("%i %i", &x, &y);

    if (areAmicable(x, y))
        printf("%i and %i are amicable numbers.", x, y);
    else
        printf("%i and %i are not amicable numbers.", x, y);

    return 0;
}
