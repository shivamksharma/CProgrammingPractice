/* Program to check whether a number is an Armstrong Number or not ? */

#include<stdio.h>
#include<math.h>
int main()
{
    int num, i=0, n, result=0, num1, temp;
    printf("Enter the number to check : ");
    scanf("%d", &num);

    num1=num;
    temp=num;
    while(num!=0) {
        num=num/10;
        i++;
    }
    
    while(num1!=0) {
        n=num1%10;
        result=result+pow(n,i);
        num1=num1/10;
    }
    
    if(temp==result)
    printf("The Number is Armstrong");
    else
    printf("The Number is not Armstrong");

}
