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
        int j=1;
        for(k=1; k<=2*i -1; k++)
        {
            if(k>i)
            {
                printf("%d", k-2*j);
                j = j++;
            }
            else
            printf("%d",k);
            
        }
        printf("\n");
    }
    return 0;
}