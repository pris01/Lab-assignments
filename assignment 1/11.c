#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter first value\n");
    scanf("%d", &a);
    printf("Enter second value\n");
    scanf("%d", &b);
    printf("Values a=%d, b=%d\n", a, b);
    a = a+b ;
    b = a-b;
    a = a-b;
    printf("Swap values a=%d, b=%d", a, b);
    return 0;
}