//Binary to decimal and decimal to binary
#include<stdio.h>
#include<math.h>
int main()
{
    int bi, deci, bi1 = 0, deci1= 0;
    int num, remin, i;
    printf("Enter a binary number: ");
    scanf("%d",&bi);
    printf("Enter a decimal number: ");
    scanf("%d",&deci);
    num = bi;
    deci1 = 0, i=0;
    
    while(num>0)
    {
        remin= num%10;
        deci1 = deci1 + remin*pow(2,i);
        i++;
        num=num/10;
    }
    printf("\n%d is %d in decimal", bi, deci1);
    
    num = deci, i =0;
    while(num>0)
    {
        remin = num%2;
        bi1 = bi1 + remin*pow(10,i);
        i++;
        num = num/2;
    }
    printf("\n%d is %d in binary", deci, bi1);
    return 0;
}