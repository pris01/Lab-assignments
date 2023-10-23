//palindrome function
#include<stdio.h>
void for_check(int);
int sum_digits(int);
int multi_digits(int);
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    for_check(n);

    return 0;
}

void for_check(int a)
{
    int palin=0,remin,temp=a;
    int sum, mult;
    while(temp>0)
    {
        remin=temp%10;
        palin = 10*palin + remin;
        temp=temp/10;
    }
    if(palin==a)
    {
       sum=sum_digits(a); 
       printf("%d", sum);
    }
    else
    {
    mult = multi_digits(a);
    printf("%d", mult);
    }

}
int sum_digits(int a)
{
    int total=0;
    while(a>0)
    {
        int remin;
        remin=a%10;
        total = total+remin;
        a=a/10;
    }
    return total;
}
int multi_digits(int a)
{
    int multi=1;
    while(a>0)
    {
        int remin; 
        remin=a%10;
        multi = multi*remin;
        a=a/10;
    }
    return multi;
}