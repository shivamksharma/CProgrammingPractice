/* Program to Print the Digits at ones place of a Number */

#include <stdio.h>
int main()
{
	int num, digit_at_ones_place;
	printf("\n Enter any number: ");
	scanf("%d", &num);
	
	digit_at_ones_place = num % 10;
	
	printf("\n The digit at ones place of %d is %d", num, digit_at_ones_place);
	
	return 0;
}
