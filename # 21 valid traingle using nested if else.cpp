//accept 3 sides of triangle and then check given triangle is valid or not. triangel is valid if sum of any 2 sides is greater than 3rd side

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter side a:");
	scanf("%d", &a);
	
	printf("enter side b:");
	scanf("%d", &b);
	
	printf("enter side c:");
	scanf("%d", &c);
	
	if((a+b)>c)
	{
		if((a+c)>b)
		{
			if((b+c)>a)
			{
				printf("triangle is valid");
			}
			else 
			{
				printf("triangle is invalid 1");
			}
		}
		else 
		{
			printf("triangle is invalid 2");
		}
	}
	else
	{
		printf("trianhle is invalid 3");
	}
	return 0;
}
