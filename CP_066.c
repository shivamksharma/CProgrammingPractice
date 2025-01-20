/* Program to read and display n numbers using an array */

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements to be entered: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
