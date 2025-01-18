/* Sum of the number entered by the user */ 
#include<stdio.h>

int main()
{
    int num, sum=0;
    read:

    printf("Enter the number. Enter 999 to End: ");
    
    scanf("%d",&num);

    if (num != 999)
    {
        if (num < 0)
            goto read;
        sum += num;
        goto read;
    }
    printf("\n Sum of the Numbers entered by the user is = %d", sum);
}
