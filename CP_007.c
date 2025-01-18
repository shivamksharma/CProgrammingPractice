// Program to find the biggest of three integers using function  


#include<stdio.h>

int biggest(int a ,int b, int c);

int main(void)
{
    int num1, num2, num3, large;

    printf("Enter the first, second and thrid number : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    large = biggest(num1, num2, num3); 
    
    printf("\n The biggest number in %d %d %d is = %d \n", num1, num2, num3, large); 
}

int biggest(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    if (b>a && b>c)
        return b;
    else
        return c;
}

