#include<stdio.h>
void conversion(int);
int main()
{
    int wg;
    printf("Enter the weight in kilograms\n");
    scanf("%d", &wg);
    conversion(wg);
    return 0;
}
void conversion(int)
{
    
    int a;
    float gram, tons, pounds;
    gram = a*1000;
    tons = a/1000;
    pounds = a*2.11;
    printf("%d kilogram is %f gram\n", a, gram);
    printf("%d kilogram is %f tons\n", a, tons);
    printf("%d kilogram is %f pounds", a, pounds);
}