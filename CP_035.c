/* Program to Take Numbers between 1-100 from User and Print "TRUE" if User Input numbers between 1-100 else Print "FALSE, Try Again" */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number Between 1-100 character: ");
    scanf("%d",&num);
    if(num>=1 && num<=100){
        printf("User Inputted Key is TRUE\n");
    }    
    else {
        printf("User Inputted Key is FALSE\n");
    }
    return 0;
}
