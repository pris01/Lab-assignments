/*19. Write a c program to find the roots of a quadratic equation.*/

#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c ;
	float r1, r2, d ;
	
	printf("Enter the coefficient of x^2 :  ") ;
	scanf("%d", &a) ;
	printf("Enter the coefficient of x :  ") ;
	scanf("%d", &b) ;
	printf("Enter the constant term :  ") ;	
	scanf("%d", &c) ;
	
	d = (b*b) - (4*a*c) ;
	r1 = ((-1*b) + pow(d, 0.5))/2*a  ;
	r2 = ((-1*b) - pow(d, 0.5))/2*a  ;
	
	printf("\nFirst root of the given equation is :  %.2f", r1) ;
	printf("\nSecond root of the given equation is :  %.2f", r2) ;
	
	return 0 ;
}
