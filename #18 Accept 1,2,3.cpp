// accept  umber 1,2 ,3 from user and return ONE,TWO,THREE

#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter a number");
	scanf("%d",&a);
	
	if(a==1)
	{
		printf("ONE");
	}
	else if(a==2)
	{
		printf("TWO");
	}
	else if(a==3)
	{
		printf("THREE");
	}
	else
	{
		printf("Invalid Input");
	}
	return 0;
}
