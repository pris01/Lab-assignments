/*21. Write a c program to check if an input number is divisible by 2 or 3 or both.*/

#include<stdio.h>

int main() {
	int num ;
	
	printf("Enter the number :  ") ;
	scanf("%d", &num) ;
	
	if(num%2 == 0 && num%3 == 3) 
		printf("\n%d is divisible by both 2 and 3", num) ;
	else if(num%3 == 0) 
		printf("\n%d is divisible by 3", num) ;
	else if(num%2 == 0) 
		printf("\n%d is divisible by 2", num) ;
	else 
		printf("\n%d is not divisible by either 2 or 3", num) ;
	
	
	return 0 ;
}
