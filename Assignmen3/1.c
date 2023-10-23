/*1. WAP to find the maximum and minimum of a given set of numbers.*/
#include<stdio.h>

int main() {
	int num, i, min, max;
	printf("Enter the size of set :  ") ;
	scanf("%d", &num) ;
	int arr[num] ;
    printf("Enter the numbers: \n");
	for(i=0 ; i<num ; i++) {
		
		scanf("%d", &arr[i]) ;
		if(max < arr[i])
			max = arr[i] ;
		if(min > arr[i]) 
			min = arr[i] ;
	}
	
	printf("\nMaximum and Minimum number is :  %d and %d", max, min) ;
	return 0 ;
}