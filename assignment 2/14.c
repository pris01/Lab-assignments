//right angled asteric pattern
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        int k;
        for(k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}