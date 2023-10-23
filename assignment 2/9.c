//check whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int n, sum=0, num, remin;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    while(num>0)
    {
        remin = num%10;
        sum = sum*10 + remin;
        num = num/10;
    }
    if(sum == n)
    printf("%d is palindrome number.", n);
    else
    printf("%d is not a palindrome number.",n);
    return 0;
    
}