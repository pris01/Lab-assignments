/*4. WAP to sort of an array of given number in ascending order. */

#include<stdio.h>

int main() {
	int i, num , j, a;
	printf("Enter the size of array :  ") ;
	scanf("%d", &num) ;
	int arr[num] ;
	printf("Enter the elements :  \n") ;
	for(i=0 ; i<num ; i++) {
		scanf("%d", &arr[i]) ;
	}
	
	printf("\n\nArray before sorting :  ") ;
	for(i=0 ; i<num ; i++)
		printf("%d  ", arr[i]) ;
	
	for (i = 0; i < num; i++){
		for (j = i + 1; j < num; j++){
			if(arr[i] > arr[j]){
         		a = arr[i];
         		arr[i] = arr[j];
         		arr[j] = a;
      		}
		}
	}
	
	printf("\nArray after sorting :  ") ;
	for(i=0 ; i<num ; i++)
		printf("%d  ", arr[i]) ;
	
	return 0 ;
}