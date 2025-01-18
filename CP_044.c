/* Program for prime number, odd & even, palindrome & armstrong number using function */


#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,sum=0,temp,flag=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    /* prime number */
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);
    
    /* odd number */
    if(n%2==1)
        printf("%d is an odd number\n",n);
    else
        printf("%d is not an odd number\n",n);
    
    /* even number */
    if(n%2==0)
        printf("%d is an even number\n",n);
    else
        printf("%d is not an even number\n",n);
    
    /* palindrome number */
    temp=n;
    while(n>0)
    {
        l=n%10;
        sum=sum*10+l;
        n=n/10;
    }
    if(temp==sum)
        printf("%d is a palindrome number\n",temp);
    else
        printf("%d is not a palindrome number\n",temp);
    
    /* armstrong number */
    k=temp;
    m=0;
    while(k>0)
    {
        l=k%10;
        m=m+l*l*l;
        k=k/10;
    }
    if(m==temp)
        printf("%d is an armstrong number\n",temp);
    else
        printf("%d is not an armstrong number\n",temp);
    
    return 0;
}
