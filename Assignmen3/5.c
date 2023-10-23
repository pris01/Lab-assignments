#include<stdio.h>
#include<string.h>

int main() {
	char txt[100] ;
	printf("Enter a text maximum length of 100 :   ") ;
	gets(txt) ;
	
	int vowels = 0, cons = 0, i=0 ;
	
	while(txt[i]) {
		if(txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' || txt[i] == 'u')
			vowels++ ;
		else if(txt[i] != ' ')
			cons++ ;
		i++;
	}
	
	printf("\nNumber of vowels :   %d", vowels) ;
	printf("\nNumber of consonants :   %d", cons) ;
	
	return 0;
}