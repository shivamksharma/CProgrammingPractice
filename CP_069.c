/* In a class, there are 10 students. Each student is supposed to appear in 3 tests.
 * Write a program using 2D array to print
 * (i) The marks obtained by each student in different subjects.
 * (ii) The total marks and average obtained by each student.
 * (iii) Store the average of each student in a seperate ID array so that it can be used to calculate the class average.
 */


#include <stdio.h>
int main()
{
        int marks[10][3], i, j;
        int total_marks[10]={0};;
        float class_avg=0.0, total_avg = 0.0;
        float avg[10];
        
        //INPUT DATA
        printf("\n ENTER THE DATA");
        printf("\n *****************");
        
        for(i=0;i<10;i++)
        {
            printf("\n Enter the marks of student %d in 3 subjects : ", i);
            for(j=0;j<3;j++)
            scanf("%d", &marks[i][j]);
        }
        
        // CALCULATE TOTAL MARKS OF EACH STUDENT
        for(i=0;i<10;i++)
        {
            for(j=0;j<3;j++)
            total_marks[i] += marks[i][j];
        }
        
        // CALCULATE AVERAGE OF EACH STUDENT
        for(i=0;i<10;i++)
        {
            for(j=0;j<3;j++)
            avg[i] = (float)total_marks[i]/3.0;
        }
        
        // CALCULATE CLASS AVERAGE
            for(i=0;i<10;i++)
            total_avg += avg[i];
            class_avg = (float)total_avg/10;
        // DISPLAY RESULTS
            printf("\n\n STUD NO. MARKS OBTAINED IN THREE SUBJECTS TOTAL MARKS \t AVERAGE");
            printf("\n*****************************************************");
            for(i=0;i<10;i++)
            { 
                printf("\n %4d", i);
                for(j=0;j<3;j++)
                printf(" %d", marks[i][j]);
                printf("%4d \t%2.2f", total_marks[i], avg[i]);
            }
                printf("\n\n CLASS AVERAGE = %f", class_avg);
                return 0;
}
