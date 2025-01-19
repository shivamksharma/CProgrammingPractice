/* Checking age for Voting */


#include<stdio.h>
int main(void)
    {
        int votingage;
        printf("\n Enter your age to check: ");
        scanf("%d", &votingage);
        
        if(votingage >= 18)

            printf("Congratulation, You're eligible for voting\n");
        
        else
            printf("Sorry, You're not eligible for voting\n");
        return 0;
    }

