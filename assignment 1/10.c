#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first value\n");
    scanf("%d", &a);
    printf("Enter seconf value\n");
    scanf("%d", &b);
    printf("Values a=%d, b=%d\n", a, b);
    c = a+b;
    a = c -a;
    b = c -a;
    printf("Swap values a=%d, b=%d", a, b);
    return 0;
}