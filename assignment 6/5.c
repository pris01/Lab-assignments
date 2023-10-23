#include <stdio.h>
int main()
{
    int n, remin, pelin = 0;
    printf("Enter a num: ");
    scanf("%d", &n);
    int tempn = n;
    while (tempn > 0)
    {
        remin = tempn % 10;
        pelin = 10 * pelin + remin;
        tempn = tempn / 10;
    }
    if (pelin == n)
    {
        printf("palindrome");
    }
    printf("add not");
    return 0;
}