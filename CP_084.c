/* Program to detect Even and Odd number */

/* 
 * 1. A number which is absolute divided by 2 and leave no remainder is Even Number
 * 2. By this logic - If any number is divisible by 2 and have no remainder then the number is even number
 * 3. In Programming Language if (anynumber%2==0) then printf("EVEN"); otherwise else printf("ODD")
 * 4. DONE
*/


#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter the Number: ");
	scanf("%d", &num);
	
	if (num%2 == 0) {
		printf("The %d is Even Number", num);
	}
	else {
		printf("The %d is Odd Number", num);
	}
	
}



