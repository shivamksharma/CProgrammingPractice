/* Simple Interest Program */

#include<stdio.h>
int main()
{
    float amount,rate,time,simple_interest;
    printf("Enter the principal amount: \n");
    scanf("%f",&amount);
    
    printf("Enter the rate of interest: \n");
    scanf("%f",&rate);
    
    printf("Enter the time period: \n");
    scanf("%f",&time);
    
    simple_interest=(amount*rate*time)/100;
    
    printf("Simple interest is %f",simple_interest); 
   
    return 0;
}
