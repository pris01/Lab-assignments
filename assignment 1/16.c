/*16. Write a c program to calculate square and square root of a given positive number.*/

#include<stdio.h>
#include<math.h>

int main() {
	int num , sq ;
	float root ;
	
	printf("Enter the number :  ") ;
	scanf("%d", &num) ;
	
	sq = num*num ;
	root = pow(num, 0.5) ;
	
	printf("\nSquare of %d is %d", num, sq) ;
	printf("\nSquare root of %d is %.2f", num, root) ;
	
	return 0 ;
}
