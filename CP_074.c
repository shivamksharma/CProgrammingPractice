/* Program to Find the Biggest in Three Numbers using Function */

#include <stdio.h>
int biggest(int a, int b, int c);   //Function Prototype

int main()
{
    int num1, num2, num3, large;
   // Taking Input from the User 
// prinft("Enter three number : \n");
// scanf("%d%d%d", &num1, &num2, &num3);
   
    printf("\n Enter the first number: ");
    scanf("%d", &num1);
    
    printf("\n Enter the second number: ");
    scanf("%d", &num2);
    
    printf("\n Enter the third number: ");
    scanf("%d", &num3);
    
    large = biggest(num1, num2, num3);
    
    printf("\n Largest number = %d", large);
    
    return 0;
}
        int biggest(int a, int b, int c)
        {
            if(a>b && a>c)
            return a;
            if(b>a && b>c)
            return b;
            else
            return c;
        }

