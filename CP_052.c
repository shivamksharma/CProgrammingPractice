#include<stdio.h>

int main()
{
    int physics,chemistry,math,hindi,english;
    float avg;
    printf("Enter the marks of physics,chemistry,math,hindi,english\n");
    scanf("%d%d%d%d%d",&physics,&chemistry,&math,&hindi,&english);
    
    avg=(physics+chemistry+math+hindi+english)/5;
    
    printf("Average marks=%f\n",avg);
    if(avg>=90)
    {
        printf("Grade A\n");
    }
    else if(avg>=80)
    {
        printf("Grade B\n");
    }
    else if(avg>=70)
    {
        printf("Grade C\n");
    }
    else if(avg>=60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade E\n");
    }
    return 0;
}
