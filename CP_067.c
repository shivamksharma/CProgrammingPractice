/* Write a program to read and display n random numbers */

#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int main()
{
    int arr[MAX], i,RandomN;
    
    for(i=0;i< MAX;i++)
    {
        // Scale the random number in the range 0 to MAX-1
        RandomN = rand() % MAX;
        
        // rand() is a pre-defined function
        arr[i] = RandomN;
    }
        printf("\n The contents of the array are: \n");
        
        // For Loop Initiated
        for(i=0;i<MAX;i++)
        printf("\t %d", arr[i]);
        
        return 0;
}
