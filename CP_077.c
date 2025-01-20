/* Write a program to read 10 integer. Display these numbers by printing three number in a line separated by commas */

#include<stdio.h>
int main()
{
	int num1, num2, num3, num4 ,num5, num6, num7, num8, num9, num10;
	printf("Enter 10 integer numbers: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
	return 0;
}
