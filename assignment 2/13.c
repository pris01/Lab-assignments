//prime or not
#include<stdio.h>
int main()
{
    int i , n, status;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==2)
    {
        status = 1;
    }
    for(i =2; i<n; i++)
    {
       if(n%i == 0)
       {
       status = 0;
       break;
       }
    }
    if(status == 0)
    printf("%d is not a prime number", n);
    else
    printf("%d is a prime number.", n);
    return 0;
}