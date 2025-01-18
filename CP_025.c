/* Write the program to print the count of even numbers between 1 and 200. Also print their sum */

#include<stdio.h>
int main()
{
    int i = 1, no_evens = 0, sum = 0;
    while(i <= 200)
    {
        if(i % 2 == 0)
        {
            no_evens++;
            sum += i;
        }
        i++;
    }
    printf("%d even numbers between 1 and 200\n", no_evens);
    printf("Sum of all even numbers: %d", sum);
    return 0;
}
