 /*15. Write a c program to find the Total, Average, and Percentage of Five Subjects or N number of subjects.*/

#include<stdio.h>

int main() {
	int n, i = 0 ;
	float total, avg, perc ;
	
	printf("Enter the number of subjects :  ") ;
	scanf("%d", &n) ;
	printf("\n") ;
	
	for(i=0 ; i<n ; i++) {
		float sub ;
		printf("Enter the marks of %d subject:   ", i+1) ;
		scanf("%f", &sub) ;
		total += sub ;
	}
	
	avg = total/n ;
	perc = avg ;
	
	printf("\n\nYour cumulative marks is :  %.2f", total) ;
	printf("\nYour average marks is :  %.2f", avg) ;
	printf("\nYour marks percentage is :  %.2f", perc) ;
	
	return 0 ;
}
