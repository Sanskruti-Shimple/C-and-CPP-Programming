//Accept number from user and find whether it is positive or negative

#include<stdio.h>

int main()
{
	int a;
	
	printf("enter number:");
	scanf("%d", &a);
	
	if(a>=0)
	{
		printf("a is positive");
	}
	else
	{
		printf("a is negative");
	}
	
	return 0;
}
