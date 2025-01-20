#include<stdio.h>
#include<math.h>
int main()
{
	int Number1, Number2, Addition, Subtration, Multiplication, Division;
	printf("\n Enter Two Numbers: ");
	scanf("%d %d", &Number1, &Number2);

	// Addition
	Addition = Number1 + Number2;

	//Subtraction
	Subtration = Number1 - Number2;

	//Multiplication
	Multiplication = Number1 * Number2;

	printf("%d", Number1, Number2, Addition, Subtration, Multiplication);
	
	return 0;
}
