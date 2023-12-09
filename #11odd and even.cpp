//accept a number from user and check whether it is odd or even

#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter a number");
	scanf("%d", &a);
	
	if (a%2==0) // if remainder of a%2 is 0 then a is even as it is completely divisible by 2
	{
		printf("a is a even number");
	}
	else
	{
		printf("a is a odd number");
	}
	return 0;
	
}
