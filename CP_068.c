/* In a company, there are 5 salesman. Each salesman is supposed to sell 3 products.
 * Write a program using 2D array to print 
 * (i) The total sales by each salesman and 
 * (ii) The total sales of each items
 *  
 */


#include <stdio.h>
int main()
{
        int sales[5][3], i, j, total_sales=0;
        
        //INPUT DATA
        printf("\n ENTER THE DATA");
        printf("\n *****************");
        
        // Initiation of Loops
        for(i=0;i<5;i++)
            {
                printf("\n Enter the sales of 3 items sold by salesman %d: ", i);
                for(j=0;j<3;j++)
                scanf("%d", &sales[i][j]);
            }

        // PRINT TOTAL SALES BY EACH SALESMAN
                for(i=0;i<5;i++)
                {
                    total_sales = 0;
                    for(j=0;j<3;j++)
                    total_sales += sales[i][j];
                    printf("\n Total Sales By Salesman %d = %d",i, total_sales);
                }
        
        // TOTAL SALES OF EACH ITEM
                for(i=0;i<3;i++) // for each item
        {
            total_sales=0;
            for(j=0;j<5;j++) // for each salesman
            total_sales += sales[j][i];
            printf("\n Total sales of item %d = %d", i, total_sales);
        }
            return 0;
}
