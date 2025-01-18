/* Write a program to print the leap year using if-else */


#include<stdio.h>

int is_leap_year(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("%d is a leap year\n",year);
                return 1;
            }
            else
            {
                printf("%d is not a leap year\n",year);
                return 0;
            }
        }
        else
        {
            printf("%d is a leap year\n",year);
            return 1;
        }
    }
    else
    {
        printf("%d is not a leap year\n",year);
        return 0;
    }
}
