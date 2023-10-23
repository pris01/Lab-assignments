//mean and standard deviation
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Enter the number of elements of the set: ");
    scanf("%d", &n);
    float ele[n];
    float total=0, sq_total =0, mean, sd, var;
    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%f", &ele[i]);
    }
    for(i=0; i<n;i++)
    {
        total = total + ele[i];
        sq_total = sq_total + pow(ele[i],2);
    }
    mean = total/n;
    var = (sq_total/n) - pow(mean,2);
    sd = pow(var,0.5);
    printf("The mean is %f", mean);
    printf("\nThe standard deviation is %f", sd);
    return 0;
}