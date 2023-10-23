//four user defined function
#include<stdio.h>
#include<math.h>
void print_odd(int, int);
void print_even(int , int);
void print_prime(int, int);
void print_armstrong(int, int);
int main()
{
    int low, high;
    printf("Enter the range: \n");
    scanf("%d %d", &low, &high);
    print_odd(low, high);
    print_even(low, high);
    print_prime(low, high);
    print_armstrong(low, high);
    return 0;
}
void print_odd(int a, int b)
{
    printf("the odd numbers are: \n");
    int i;
    for(i=a; i<=b; i++)
    {
        if(i%2==1)
        printf("%d ",i);
    }
}
void print_even(int a, int b)
{
    printf("\nthe even numbers are: \n");
    for(a; a<=b; a++)
    {
        if(a%2==0)
        printf("%d ",a);
    }
}
void print_prime(int a,int b)
{
    printf("\nThe prime numbers are: \n");
    for(a; a<=b; a++)
    {
        int count=0;
        for(int i=1; i<=a; i++)
        {
            if(a%i==0)
            count++;
        }
        if(count==2)
        {
            printf("%d ",a);
        }
    }

}
void print_armstrong(int a,int b)
{
    printf("\nthe armstrong numbers are: \n");
    int num, i;
    for(i=a; i<=b; i++)
    {
        int no_digit=0;
        num=i;
        while(num>0)
        {
            num=num/10;
            no_digit++;
        }
        num=i;
        int remin, total=0;
        while(num>0){
            remin=num%10;
            total=total+pow(remin,no_digit);
            num=num/10;
        }
        if(total == i)
        printf("%d ",i);

    }
    
}