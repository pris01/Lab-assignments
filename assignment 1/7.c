//Program to find the area and circumference of a circle 

#include<stdio.h>
#include<math.h>


void main()
{
    float r,A,C, pi = 3.14;

    printf("Enter the radius of circle : ");
    scanf("%f",&r);

    A=pi*pow(r,2);
    C=2*pi*r;

    printf("\n Area of Circle = %f \n Circumference of circle = %f", A,C);
}