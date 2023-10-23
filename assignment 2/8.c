//armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n, num, digits = 0, i, remin, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num>0)
    {
        num = num/10;
        digits++;
    }
    num = n;
    while(num>0)
    {
        remin = num%10;
        sum = sum + pow(remin,digits);
        num = num/10;
    }
    if(sum==n)
    printf("%d is an armstrong number.", n);
    else
    printf("%d is not an armstrong number.", n);
    return 0;
}