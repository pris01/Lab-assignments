//display n terms of natural numbers and their sum
#include<stdio.h>
int main()
{
    int n, i=1, sum= 0;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("The %d terms are: \n",n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("Sum of the  %d numbers of the series is %d", n,sum);
    return 0;

}