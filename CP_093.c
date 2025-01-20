/* FACTORS */

#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factors of %d: ", n);
    while (i <= (n / 2))
    {
        if (n % i == 0)
            printf("%d ", i);
            
        i++;
    }
        
    getch();
    return 0;
}
