/*8. A department store chain has 6 stores and each store has the same 10 department
	The weekly sale of the chain are stored in a 6x10 array SALES. 
	prints the total weekly sales of each store.
	print the total weekly sales of each department.
	print the total weekly sales of the chain. */
	
#include<stdio.h>

int main() {
	int stchain[6][10], i, j, store[6] = {0}, department[10] = {0}, sum = 0;
	
	for(i=0 ; i<6 ; i++) {
		printf("\nSales of store number %d\n\n", i+1) ;
		for(j=0 ; j<10 ; j++) {
			printf("Sale of department %d : ", j+1) ;
			scanf("%d", &stchain[i][j]) ;
			store[i] += stchain[i][j] ;
			department[j] += stchain[i][j] ;
			sum += stchain[i][j] ;
		}
	}
	
	printf("\n\nTotal weekly sale of each store\n\n") ;
	for(i=0 ; i<6 ; i++)
		printf("Sale of store nubmer %d :  %d\n", i+1, store[i]) ;
	
	printf("\n\nTotal weekly sale of each department\n\n") ;	
	for(i=0 ; i<10 ; i++)
		printf("Sale of department nubmer %d :  %d\n", i+1, department[i]) ;
		
	printf("\n\nTotal weekly sale of chain :  %d", sum) ;
	
	return 0 ;
}