//fibonacci series 
#include<stdio.h>
int main()
{
    int n,i,a=1;
    int j = 0, k=1, sum;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("The 1st %d terms of fibonacci series are: \n", n);
    for(i=1; i<=n-1; i++)
    {
        if(i == 1){
            printf("%d\t",a);
        }
        sum = k+j;
        printf("%d\t", sum);
        j = k;
        k= sum;
    }
    return 0;
}
