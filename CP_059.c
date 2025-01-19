#include<stdio.h>
int main()
{
    int InputNumber;
    printf("\nEnter the Number to Check = ");
    scanf("%d", &InputNumber);

    if (InputNumber > 0)
    printf("%d  is Positive Number \n", InputNumber);

    else if (InputNumber < 0)
    printf("%d  is Negative Number \n", InputNumber);

    else 
    printf("0 is neither Positive or Negative Number");

    return 0;
}
