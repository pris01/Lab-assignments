//check whether a given string is palindrome or not
#include<stdio.h>
int main()
{
    char str[1000];
    int i, n=0, flag =0;
    printf("Enter any string: \n");
    for(i=0; i<1000; i++)
    {
        scanf("%c", &str[i]);
        if(str[i] == '\n')
        break;
        n++;
    }
    for(i=0; i<n-1; i++)
    {
        if(str[i]==str[n-i-1])
        flag = 1;
        else 
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    printf("palindrome string");
    else 
    printf("Not a palindrome string");

    return 0;
}