#include<stdio.h>
int main()
{
    int i=1, n;
    float total = 0, ave, perc;

    printf("Enter the number of subjects\n");
    scanf("%d", &n);

    printf("Enter the marks of subjects\n");
    while(i<=n)
    {
        float sub;
        scanf("%f", &sub);
        total = total + sub;
        i++;
    }
    printf("Total marks is %f\n", total);
    ave = total/n;
    perc = ave;
    printf("Average is %f\n", ave);
    printf("Percentage is %f", perc);
    return 0;
}