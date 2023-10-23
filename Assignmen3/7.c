/*7. WAP to convert decimal to binary and print the numbers of 0s and 1s in the binary number.*/

#include<stdio.h>

int main() {
	int base = 1, num, bin = 0, count_1 = 0 , count_0 = 0 ;
	printf("Enter the number :   ") ;
	scanf("%d", &num) ;
	
	while(num) {
		if((num%2) == 0)
			count_0++ ;
		else
			count_1++ ;
		bin = bin + (num%2)*base;
		base *= 10 ;
		num /= 2 ;		
	}
	
	printf("\nBinary conversion of number is :  %d", bin) ;
	printf("\nNumber of 0s and 1s are :  %d and %d.", count_0, count_1) ;
	
	return 0 ;
}