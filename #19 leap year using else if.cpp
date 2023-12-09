// accept year from user and check whether it is leap year or not

#include<stdio.h>

int main()
{
	int year;
	
	printf("enter year:");
	scanf("%d", &year);
	
	if(year%400==0)
	{
		printf("Leap Year");	
	}	
	else if(year%100==0)
	{
		printf("not a leap year");
	}
	else if(year%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
	
	return 0;
}
