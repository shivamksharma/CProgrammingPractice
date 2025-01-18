/* Read two matrix and sum store in 3rd matrix using array */
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element %d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element %d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}