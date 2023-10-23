//gcd and hcf of two numbers
#include<stdio.h>
int main()
{
    int a, b, diff, hcf, lcm;
    int i,d,mult;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    //gcd part
    if(a>b)
    diff = a-b;
    else 
    diff = b-a;
    for(i=diff; i<=diff; i--)
    {
        if(a%i ==0 && b%i ==0)
        {
            hcf = i;
            break;
        }
    }
    
    printf("\nhcf of the two numbers is %d", i);
    lcm = a*b/hcf;
    printf("\nlcm of the two numbers is %d", lcm);
    return 0;
}