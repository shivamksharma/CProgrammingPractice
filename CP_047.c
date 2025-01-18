/* Print 'TRUE' when user input number between 1-100 else Print 'FALSE' */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number between 1-100: ");
    scanf("%d", &num);
    if(num>=1 && num<=100)
    {
        printf("Number is in between 1-100, TRUE");
    }
    else
    {
        printf("False, try again");
    }
    return 0;
}
