//accept 3 variables from user and find maximum 

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter 1st number:");
	scanf("%d", &a);
	
	printf("enter 2nd number");
	scanf("%d", &b);
	
	printf("enter 3rd numebr");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is max");
		}
		else 
		{
			printf("c is max");   
		}
	}
	else 
	{
		if (b>c)              
		{
			printf("b is max");
		}
		else 
		{
			printf("c is max");
		}
	}
	
	return 0;
}
