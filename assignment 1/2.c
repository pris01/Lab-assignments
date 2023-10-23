//Program to find addition, sub, mul, div of two numbers
#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second nunber : ");
    scanf("%d",&b);
    printf("\n Addition of the two entered numbers is : %d", a+b);
    printf("\n Substraction of the two entered numbers is : %d", a-b);
    printf("\n Multiplication of the two entered numbers is : %d", a*b);
    printf("\n Division of the two entered numbers is : %d", a/b);
    return 0;
}