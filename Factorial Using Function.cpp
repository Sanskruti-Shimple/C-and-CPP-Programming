#include<stdio.h>

long int factorial(int n)
{
	int i;
	long int fact=1;
	
	if(n==1) return fact;
	
	for(i=n; i>=1; i--)
	    fact = fact*i;
	    
	return fact;
}

int main()
{
	int num;
	
	printf("Enter an integer:- ");
	scanf("%d", &num);
	
	printf("Factorial Of %d is = %ld", num, factorial(num));
	return 0;
}
