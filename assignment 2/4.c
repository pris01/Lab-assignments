//Reverse of a number
#include<stdio.h>
int main()
{
    int num, remin, sum = 0, n;
    printf("Enter any number:");
    scanf("%d", &num);
    n=num;
    while(n>0)
    {
        remin = n%10;
        sum = sum*10 + remin;
        n=n/10;
    }
    printf("The reverse number is %d", sum);
    return 0;
}
