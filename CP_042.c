/* Program to Convert Decimal Numbers into Binary Numbers */

#include<stdio.h>

int main()
{
    int num, rem, i=1, binarynum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        rem=num%2;
        binarynum=binarynum+rem*i;
        num=num/2;
        i=i*10;
    }
    printf("Binary number is: %d\n", binarynum);
    return 0;
}
