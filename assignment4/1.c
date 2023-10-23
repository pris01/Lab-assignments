//make two function for input and output
#include<stdio.h>
void input(int[],int);
void output(int[], int);
int main()
{
    int n; 
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    input(arr,n);
    output(arr,n);
    return 0;
}
void input(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}