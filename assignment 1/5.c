//program to find the compound interest 

#include<stdio.h>
#include<math.h>

void main()
{
    float p, r, t, CI;

    printf("Enter the value of Principal : ");
    scanf("%f",&p);
    printf("Enter the value of Rate Of Interest : ");
    scanf("%f",&r);
    printf("Enter the Duration of time : ");
    scanf("%f",&t);
    
    CI = p * pow(1+r/100,t) - p;
    printf("\nCompound Interest = %f", CI);
}