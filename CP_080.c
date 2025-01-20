/* program for Addtion, Subtration, Multiplication, Division */
#include<stdio.h>
int main()
{
    int Num1, Num2, Addition;
    printf("Enter the Number \n");
    scanf("%d%d",&Num1, &Num2);
	Addition = Num1 + Num2;
	printf("%d + %d = %d", Num1, Num2, Addition);
    return 0;
}

