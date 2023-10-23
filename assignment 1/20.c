/*20. Write a c progrm to find the total marks, Percentage and grade of a student in five different subjects.*/

#include<stdio.h>

int main() {
	float maths, phy, chem, eng, bio, marks, perc ;
	
	printf("Enter the marks of Mathematics :   ") ;
	scanf("%f", &maths) ;
	printf("Enter the marks of Physics :   ") ;
	scanf("%f", &phy) ;
	printf("Enter the marks of Chemistry :   ") ;
	scanf("%f", &chem) ;
	printf("Enter the marks of English :   ") ;
	scanf("%f", &eng) ;
	printf("Enter the marks of Biology :   ") ;
	scanf("%f", &bio) ;
	
	marks = maths + phy + chem + eng + bio ;
	perc = marks/5 ;
	
	printf("\n\nYour cumulative marks is :  %.2f", marks) ;
	printf("\nYour marks percentage is :  %.2f", perc) ;
	
	if(perc >= 90)
		printf("\nYou get A grade.") ;
	else if(perc >= 80)
		printf("\nYou get B grade.") ;
	else if(perc >= 65)
		printf("\nYou get C grade.") ;
	else
		printf("\nYou get D grade.") ;
	
	return 0 ;
	
}
