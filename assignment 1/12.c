#include<stdio.h>
int main()
{
    int c, f;
    float c_1, f_1;
    printf("Enter the celsius value\n");
    scanf("%d", &c);
    printf("Enter the fahrenheit value\n");
    scanf("%d", &f);
    f_1 = (1.8*c) +32;
    c_1 = (f - 32)*5/9;
    printf("%d celsius is = %f fahrenheit\n", c, f_1);
    printf("%d fahrenheit is = %f celsius",f, c_1);
    return 0;
}