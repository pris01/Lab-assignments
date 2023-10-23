//find the factorial of a given number
#include<stdio.h>
int main()
{
    int n, fact = 1, i=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i =1; i<=n; i++)
    {
        fact = fact *i;
    }
    printf("The factorial of the given number is %d", fact);
    return 0;

}