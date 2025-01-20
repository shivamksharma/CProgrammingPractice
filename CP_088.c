
#include<stdio.h>
int main(){
	
	int leapy;
	printf("Enter the year: ");
	scanf("%d", &leapy);
	
	if (((leapy%4 == 0) && (leapy%100 != 0)) || (leapy%400==0))
	{
			printf("%d is leap year\n", leapy);
	}
	else 
	{
		printf("%d is not leap year\n", leapy);
	}
	return 0;
	}
