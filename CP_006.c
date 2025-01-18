/* Write a program to add two number using functions */


#include<stdio.h>

int sum(int num1, int num2);           

int main()
{
    int num1, num2, total = 0;
    printf("\n Enter the Num1: ");
    scanf("%d", &num1);

    printf("\n Enter the Num2: ");
    scanf("%d", &num2);

    total = sum(num1, num2);

    printf("\n Total = %d", total);    

return 0;

}

int sum(int num1, int num2)           
{                                      
    int result;
    result = num1 + num2;
    return result;
}



