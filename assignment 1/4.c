//Program to find the simple interest 
#include<stdio.h>

void main()
{
    float p,t,r,SI;

    printf("Enter the value of Principal : ");
    scanf("%f",&p);
    printf("Enter the value of Rate Of Interest : ");
    scanf("%f",&r);
    printf("Enter the Duration of time : ");
    scanf("%f",&t);
    
    SI = (p*r*t)/100;
    printf("\n Simple Interest = %f", SI);
}