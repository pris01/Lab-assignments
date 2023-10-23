//print all prime numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The prime numbers between 1 to %d are\n",n);  
    for(i=2; i<n; i++)
    {
        int j, factors = 0;
        for(j=1; j<=i; j++)
        {
            if(i%j == 0)
            factors++;
        }
        if(factors == 2)
        {
            printf("%d ", i);
        }
    }
    return 0;
}