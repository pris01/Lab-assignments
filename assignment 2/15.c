//regular triangular shaped asteric pattern
#include<stdio.h>
int main()
{
    int i,l,k,n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(i=1; i<=n ; i++)
    {
        for(l=n-i+1; l>0; l--)
        {
            printf(" ");
        }
        for(k=1; k<=2*i -1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}