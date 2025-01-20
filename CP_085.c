#include<stdio.h>
int main(){
		
		int num1, num2, num3;
		printf("Enter the Numbers: ");
		scanf("%d%d%d", &num1, &num2, &num3);
		
		if (num1>num2 && num1>num3)
		{
			printf("%d is the largest number", num1);
		}
		
		if (num2>num1 && num2>num3)
		{
			printf("%d is the largest number\n", num2);
		}
		
		if (num3>num1 && num3>num2)
		{
			printf("%d is the largest number\n", num3);
		}
		
		if (num1==num2 && num1==num3)
		{
			printf("all numbers are equal\n");
		}
	}
