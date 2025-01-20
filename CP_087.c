#include<stdio.h>
int main(){
	
	int num;
	printf("Enter the number to check: ");
	scanf("%d", &num);
	
	
	if (num%5 == 0){
		printf("%d is divisible by 5\n", num);
	}
	else if (num%11 == 0){
		printf("%d is divisible by 11\n", num);
	}
	else 
		{
			printf("The number is not divisible\n");
		}
	}
