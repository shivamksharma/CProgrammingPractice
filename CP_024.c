/* write a menu driven program to add, subtract, multiply, divide two integer using function */ 
#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main()
{
    int a,b,c,d,e,f;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    d=sub(a,b);
    e=mul(a,b);
    f=div(a,b);
    printf("Addition of two numbers is %d\n",c);
    printf("Subtraction of two numbers is %d\n",d);
    printf("Multiplication of two numbers is %d\n",e);
    printf("Division of two numbers is %d\n",f);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
