//accept 4 variable and find maximum

#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("enter 1st number:");
	scanf("%d", &a);
	
	printf("enter 2nd number:");
	scanf("%d", &b);	
	
	printf("enter 3rd number:");
	scanf("%d", &c);
	
	printf("enter 4th number:");
	scanf("%d" ,&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else 
		{
			if(c>d)
			{
				printf("c is max");
			}
			else 
			{
				printf("d is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is max");
			}
			else 
			{
				printf("d is max");
			}
		}
	}
	
	return 0;
}
