/*6. WAP to multiply two matrices.*/

#include<stdio.h>

int main() {
	int r1, c1, r2, c2, i, j, k ;
	printf("Enter the number of rows and columns of matrix 1 :  ") ;
	scanf("%d%d", &r1, &c1) ;
	printf("Enter the number of rows and columns of matrix 2 :  ") ;
	scanf("%d%d", &r2, &c2) ;
	int arr1[r1][c1], arr2[r2][c2], res[r1][c2] ;
	
	if(c1 != r2)
		printf("\n\nWrong Input!!") ;
	else {
		printf("\n\nEnter the element of first matrix :  \n") ;
		for(i=0 ; i<r1 ; i++)
			for(j=0 ; j<c1 ; j++)
				scanf("%d", &arr1[i][j]) ;
	
		printf("\n\nEnter the element of second matrix :  \n") ;		
		for(i=0 ; i<r2 ; i++) 
			for(j=0 ; j<c2 ; j++)
				scanf("%d", &arr2[i][j]) ;
			
		printf("\n\nMultiplication of above matrices:  \n") ;
		for(i=0 ; i<r1 ; i++)
			for(j=0 ; j<c1 ; j++) {
				res[i][j] = 0 ;
				for(k=0 ; k<c2 ; k++) 
					res[i][j] += arr1[i][k]*arr2[k][j] ;
			}
		
		for(i=0 ; i<r1 ; i++) {
			for(j=0 ; j<c2 ; j++)
				printf("%d ", res[i][j]) ;
			printf("\n") ;
		}
	}
	
	return 0 ; 
}