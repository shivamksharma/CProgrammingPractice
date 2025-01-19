#include<stdio.h>
int main()
{
		int num1, num2, Addition;
		printf("Enter the First Number: ");
		scanf("%d", &num1);

		printf("Enter the Second Number: ");
		scanf("%d", &num2);

		Addition = num1 + num2;

		printf("\nAddition of %d + %d = %d\n", num1, num2, Addition);

		return 0;
}
