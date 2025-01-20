/* C Program of Prime Number, Addition, Substraction, Multiplication, Divide, Large Number, Factorial, Swap Number, Quadric Equation, Positive and Negative Number */
#include<stdio.h>
#include<math.h>
int main()
{
    char MathematicalOperations;
    printf("\n Hello, This is the Program Where You can Try Ten Mathematical Operations");
    scanf("%c", &MathematicalOperations);
    switch(MathematicalOperations)
    {
        case '1':
            printf("\n Prime Number");
            break;
        case '2':
            printf("\n Addition");
            break;
        case '3':
            printf("\n Substraction");
            break;
        case '4':
            printf("\n Multiplication");
            break;
        case '5':
            printf("\n Divide");
            break;
        case '6':
            printf("\n Large Number");
            break;
        case '7':
            printf("\n Factorial");
            break;
        case '8':
            printf("\n Swap Number");
            break;
        case '9':
            printf("\n Quadric Equation");
            break;
        case '10':
            printf("\n Positive and Negative Number");
            break;
        default:
            printf("\n Wrong Input, You can Only Choose between 1 to 10");
            printf("\n Please Try Again");
    }
}
/* Prime Number */
    if (MathematicalOperations == '1')
    {
        int PrimeNumber;
        printf("\n Please Enter a Number");
        scanf("%d", &PrimeNumber);
        int i;
        for (i = 2; i <= PrimeNumber / 2; i++)
        {
            if (PrimeNumber % i == 0)
            {
                printf("\n %d is not a Prime Number", PrimeNumber);
                break;
            }
        }
        if (i == PrimeNumber / 2 + 1)
        {
            printf("\n %d is a Prime Number", PrimeNumber);
        }
    }
/* Addition */
    if (MathematicalOperations == '2')
    int main()
    {
        int Addition1, Addition2;
        printf("\n Please Enter Two Numbers");
        scanf("%d %d", &Addition1, &Addition2);
        printf("\n %d + %d = %d", Addition1, Addition2, Addition1 + Addition2);
    }
    /* Substraction */
    if (MathematicalOperations == '3')
    {
        int Substraction1, Substraction2;
        printf("\n Please Enter Two Numbers");
        scanf("%d %d", &Substraction1, &Substraction2);
        printf("\n %d - %d = %d", Substraction1, Substraction2, Substraction1 - Substraction2);
    }
    /* Multiplication */
    if (MathematicalOperations == '4')
    {
        int Multiplication1, Multiplication2;
        printf("\n Please Enter Two Numbers");
        scanf("%d %d", &Multiplication1, &Multiplication2);
        printf("\n %d * %d = %d", Multiplication1, Multiplication2, Multiplication1 * Multiplication2);
    }
    /* Divide */
    if (MathematicalOperations == '5')
    {
        int Divide1, Divide2;
        printf("\n Please Enter Two Numbers");
        scanf("%d %d", &Divide1, &Divide2);
        printf("\n %d / %d = %d", Divide1, Divide2, Divide1 / Divide2);
    }
    /* Large Number */
    if (MathematicalOperations == '6')
    {
        int LargeNumber1, LargeNumber2;
        printf("\n Please Enter Two Numbers");
        scanf("%d %d", &LargeNumber1, &LargeNumber2);
        if (LargeNumber1 > LargeNumber2)
        {
            printf("\n %d is the Large Number", LargeNumber1);
        }
        else
        {
            printf("\n %d is the Large Number", LargeNumber2);
        }
    }
    /* Factorial */
    if (MathematicalOperations == '7')
    {
        int Factorial1, Factorial2;
        printf("\n Please Enter Two Numbers");
        scanf("%d %d", &Factorial1, &Factorial2);
        int i;
        int FactorialResult = 1;
        for (i = Factorial1; i <= Factorial2; i++)
        {
            FactorialResult = FactorialResult * i;
        }
        printf("\n %d! = %d", Factorial1, FactorialResult);
    }
}