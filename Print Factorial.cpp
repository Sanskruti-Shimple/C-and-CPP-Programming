#include<stdio.h>

int main(){
	int num, i;
	long int fact;
	
	printf("Enter Integer:- ");
	scanf("%d", &num);
	
	fact = 1;
	for(i=num; i>=1; i--)
	    fact = fact*i;
	    
	    printf("\nFactorial Of %d is = %d", num, fact);
	    return 0;
}
