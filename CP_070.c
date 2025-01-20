/* Write a program to read a 2D array marks which stores marks of 5 students in 3 subjects.
 * Write a program to display the highest marks in each subject.
 */


#include<stdio.h>

int main()
{
    int marks[5][3], i, j, max_marks;
    
    //Initialization of Loop
    for(i=0;i<5;i++)
    {
        printf("\n Enter the marks obtained by student %d", i);

        for (j=0;j<3;j++)
        {
            printf("\n marks[%d][%d] = ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    for (j=0;j<3;j++)
    {
        max_marks = marks[0][j];
        for (i=1;i<5;i++)
        {
            if (marks[i][j]>max_marks)
                max_marks = marks[i][j];
        }
        prinft("\n The highest marks obtained in the subject %d = %d", j, max_marks);
    }
    return 0;
}

