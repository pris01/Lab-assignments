//shortest of three numbers
#include<stdio.h>
int shor(int, int, int);
int main()
{
    int a, b, c, num;
    printf("Enter three number: \n");
    scanf("%d %d %d", &a, &b, &c);
    num = shor(a, b, c);
    printf("the shortest among the three is %d", num);
    return 0;
}
int shor(int a, int b, int c)
{
    int min, i;
    min = a;
    
   
}