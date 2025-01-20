/* Write a program that prints a floating point value in exponential format with that following specifications
 * (a) correct to two decimal places:
 * (b) correct to four decimal places:
 * (c) correct to eight decimal places */
 
 #include<stdio.h>
int main()
{
	float num = 3.123456789;
	printf("%.2e\n", num);
	printf("%.4e\n", num);
	printf("%.8e\n", num);
	return 0;

}