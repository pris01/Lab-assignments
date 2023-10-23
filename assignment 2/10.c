//simple calculator using switch case
#include<stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    printf("What you want to do\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\nEnter your choice\n");
    fflush(stdin);
    scanf("%c",&c);
    switch(c)
    {
    case '+':
    printf("addition is %d", a+b);
    break;
    case '-':
    printf("subtraction is %d", a-b);
    break;
    case '*':
    printf("multiplication is %d", a*b);
    break;
    case '/':
    printf("division is %d", a/b);
    break;
    default:
    printf("wrong choice");
    }
    return 0;
}
