// valid traingle using else if

#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter side a:");
	scanf("%d",&a);
	
	printf("enter side b:");
	scanf("%d", &b);
	
	printf("enter side c:");
	scanf("%d",&c);
	
	if((a+b)>c && (a+c)>b&& (b+c)>a)
	{
		printf("triangle is valid");
	}
	else 
	{
		printf("triangle is invalid");
	}
	return 0;
}

