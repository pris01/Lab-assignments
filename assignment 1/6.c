//Program to find the area and perimeter of a rectangle 

#include<stdio.h>

void main()
{
    int a,b,A,P;

    printf("Enter the length of rectangle : ");
    scanf("%d", &a);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &b);

    A = a*b;
    P = 2 * (a+b);
    printf("\n Area of rectangle = %d \n Perimeter of rectangle = %d", A, P);
}