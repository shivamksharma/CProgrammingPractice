#include<stdio.h>
int main()
{
	int PrintNumber, Num;
	printf("\n Enter the Number : ");
	scanf("%d", &PrintNumber);

	if (PrintNumber>100)
		printf("\n Two or Four Digit Number Accepted, Try Again!");
	else (PrintNumber < 100);
		printf("\n That's Correct, Thank You For Using This Program");
	else if(PrintNumber == 100)
		printf("\n That's Incorrect");

	return 0;
}