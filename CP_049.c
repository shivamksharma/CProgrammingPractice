/* Program to Reverse a Number using While Loop */

#include<stdio.h>
int main(void){

    int number, reverse=0, remainder;
    printf("\nEnter the Number for Reversing : ");
    scanf("%d", &number);
    
    while(number!=0){
		remainder = number%10;
		reverse = reverse*10 + remainder;
		number /= 10;
	}
	
	printf("The reversed number is %d", reverse);
   
    return 0;

}
