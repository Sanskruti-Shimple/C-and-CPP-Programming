//accept 2 numbers from user and fid maximum

#include<stdio.h>

int main()
{
	int a,b;
	
	printf("enter 1st number:");
	scanf("%d", &a);
	
	printf("enter 2nd number:");
	scanf("%d", &b);
	
	if (a>b)
	{
		printf("a is max");
	}
	else 
	{
		printf("b is max");
	}
}
