/* Program for Addition, Substraction, Multiplication, Division, Factorial Number, Prime Number, Swap Number, Positive & Negative Number, Large Number, Quadric Equations using Switch Case*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int addition();
int subtraction();
int multiplication();
int division();
int factorial();
int primenumbers();
int swapnumber();
int positivenumber();
int largenumber();
int quadricequation();


int main()
{
    int mathematical_operations;
    printf("\n\n Welcome to Mathematical Operations:");
    printf("\n This is the Program Where you can Try Ten Mathematical Operations");
    printf("\n----------------------------------------------------------------------------------");
    printf("\n 1. Addition");
    printf("\n 2. Substraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Prime Number");
    printf("\n 6. Large Number");
    printf("\n 7. Factorial Number");
    printf("\n 8. Swap Number");
    printf("\n 9. Quadric Equation");
    printf("\n10. Positive & Negative Number");
    printf("\n----------------------------------------------------------------------------------");
    printf("\n Enter your choice to Proceed: ");
    scanf("%d",&mathematical_operations);

    // Using Switch for Call Functions
    switch(mathematical_operations) 
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            primenumbers();
            break;
        case 6:
            largenumber();
            break;
        case 7:
            factorial();
            break;
        case 8:
            swapnumber();
            break;
        case 9:
            quadricequation();
            break;
        case 10:
            positivenumber();
            break;
        default:
            printf("\n Wrong Input Entered");
            printf("\n Please Try Again");
            break;
    }
    
}

// Additions
int addition()
{
    int FirstNum,SecondNum,Sum;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    Sum=FirstNum+SecondNum;
    printf("\n The Addition of %d + %d = %d \n", FirstNum, SecondNum, Sum);
}

// Subtractions
int subtraction()
{
    int FirstNum,SecondNum,Sub;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    Sub=FirstNum-SecondNum;
    printf("\n The Subtraction of %d - %d = %d \n", FirstNum, SecondNum, Sub);
}

// Multiplications
int multiplication()
{
    int FirstNum,SecondNum,Mul;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    Mul=FirstNum*SecondNum;
    printf("\n The Multiplication of %d x %d = %d", FirstNum, SecondNum, Mul);
}

// Divisions
int division()
{
    int FirstNum,SecondNum,Div;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    Div=FirstNum/SecondNum;
    printf("\n The Division of %d / %d = %d", FirstNum, SecondNum, Div);
}

// Prime Numbers
int primenumbers()
{
    int FirstNum,Prime;
    printf("\n Enter the Number: ");
    scanf("%d",&FirstNum);
    Prime=FirstNum;
    for(int i=2;i<=FirstNum/2;i++)
    {
        if(Prime%i==0)
        {
            Prime=0;
            break;
        }
    }
    if(Prime!=0)
    {
        printf("\n The Number %d is Prime",FirstNum);
    }
    else
    {
        printf("\n The Number %d is Not Prime",FirstNum);
    }
}

// Large Number
int largenumber()
{
    int FirstNum,SecondNum,Temp;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    if(FirstNum>SecondNum)
    {
        printf("\n The First Number %d is Larger \n", FirstNum);
    }
    else
    {
        printf("\n The Second Number %d is Larger \n", SecondNum);
    }
}

// Factorial
int factorial()
{
    int FirstNum,Fact;
    printf("\n Enter the Number: ");
    scanf("%d",&FirstNum);
    Fact=FirstNum;
    for(int i=FirstNum-1;i>0;i--)
    {
        Fact=Fact*i;
    }
    printf("\n The Factorial of %d is %d",FirstNum,Fact);
}

// Swap Number
int swapnumber()
{
    int FirstNum,SecondNum,Temp;
    printf("\n Enter the First Number:");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    Temp=FirstNum;
    FirstNum=SecondNum;
    SecondNum=Temp;
    printf("\n The First Number is %d",FirstNum);
    printf("\n The Second Number is %d",SecondNum);
}

// Quadric Equations
int quadricequation()
{
    int FirstNum,SecondNum,ThirdNum,Quad;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    printf("\n Enter the Third Number: ");
    scanf("%d",&ThirdNum);
    Quad=(FirstNum*FirstNum)+(SecondNum*SecondNum)-(ThirdNum*ThirdNum);
    printf("\n The Quadric Equation is %d",Quad);
}

// Positive & Negative Numbers
int positivenumber()
{
    int FirstNum,SecondNum,Temp;
    printf("\n Enter the First Number: ");
    scanf("%d",&FirstNum);
    printf("\n Enter the Second Number: ");
    scanf("%d",&SecondNum);
    if(FirstNum>0)
    {
        printf("\n The First Number is Positive");
    }
    else
    {
        printf("\n The First Number is Negative");
    }
    if(SecondNum>0)
    {
        printf("\n The Second Number is Positive");
    }
    else
    {
        printf("\n The Second Number is Negative");
    }
}
