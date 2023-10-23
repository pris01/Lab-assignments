// n terms of odd natural numbers
#include<stdio.h>
int main()
{
    int i, n, odds, sum= 0;
    printf("Enter number of terms\n");
    scanf("%d", &n);
    printf("The %d terms of odd natural numbers are\n", n);
    for(i =0; i<n; i++)
    {
        odds = 2*i + 1;
        printf("%d\n", odds);
        sum = sum + odds;

    }
    printf("Sum of the odd numbers is %d", sum);
    return 0;
}