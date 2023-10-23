/*17. Write a c program to find the largest number among the three given numbers.*/

#include<stdio.h>

int main() {
	int a, b, c, max ;
	
	printf("Enter first number :  ") ;
	scanf("%d", &a) ;
	printf("Enter second number :  ") ;
	scanf("%d", &b) ;
	printf("Enter third number :  ") ;
	scanf("%d", &c) ;
		
	if((a > b) && (a > c))
		max = a ;
	else if((b > c) && (b > a))
		max = b ;
	else
		max = c ;
		
	printf("\nMaximum number among %d, %d and %d is :  %d", a, b, c, max) ;
	
	return 0 ;
}
