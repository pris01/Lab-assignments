//multiplication table of a given integer
#include<stdio.h>
int main()
{
    int n, j=10, i=1;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The multiplication table of the given number is\n");
    for(i = 1; i<=j; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}