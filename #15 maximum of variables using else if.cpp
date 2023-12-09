// accept 3 numbers from user and finf maximum

#include<stdio.h>
int main()
{
	int a,b,c,d;
	
	printf("enter 1st number:");
	scanf("%d", &a);
	
	printf("enter 2nd number:");
	scanf("%d", &b);
	
	printf("enter 3rd  number:");
	scanf("%d", &c);
	
	printf("enter 4th number:");
	scanf("%d", &d);
	
	if(a>b&&a>c&&a>d)
	{
		printf("a is max");
	}
	else if(b>a&&b>c&&b>d)
	{
		printf("b is max");
	}
	else if(c>a&&c>b&&c>d)
	{
		printf("c is max");
	}
	else if (d>a&&d>b&&d>c)
	{
		printf("d is max");
	}
	
	return 0;
}
