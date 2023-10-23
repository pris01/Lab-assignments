#include<stdio.h>
#include<math.h>
int main()
{
    int x,n, total;
    printf("enter the value of x\n");
    scanf("%d", &x);
    printf("Enter the value of n\n");
    scanf("%d", &n);
    total = pow(x,n);
    printf("%d to the power %d is %d", x,n,total);
    return 0;

}