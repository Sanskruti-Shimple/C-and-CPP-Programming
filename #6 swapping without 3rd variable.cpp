//Swaping two variables without using 3rd variable

#include<stdio.h>

int main()
{
	int a,b;
	printf("enter 1st number:");
	scanf("%d", &a);
	
	printf("enter 2nd number:");
	scanf("%d", &b);
	
	printf("before swap, a=%d \t b=%d\n",a,b);
	
	a=a+b; // if a=5 and b=6 a=a+b gives a=11
	b=a-b;  // now a=11 therefore b=11-6 , b=5
	a=a-b; // a=11-5 gives a=6
	 
	printf("after swap, a=%d \t b=%d", a,b);
	 
	return 0; 
} 
