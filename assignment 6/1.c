//four user defined function
#include<stdio.h>
int arr[30];
void input(int);
void output(int,int);
int find_min(int);
int find_max(int);
int main()
{
    int n, count=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    input(n);
    output(arr,n);
    find_min(arr);
    find_max(arr);
    return 0;
}
void input(int n)
{
    printf("Enter the elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void output(int arr,int n)
{
    printf("the elements are: \n");
    for(int i=0; i<n; i++)
    {
       
    }
}
