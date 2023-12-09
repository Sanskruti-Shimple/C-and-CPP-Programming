//accept age from user and show whether he is eligible to vote or not

#include<stdio.h>

int main()
{
	int age;
	
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you can vote now!!");
	}	
	else 
	{
		printf("you can vote after %d", 18-age);
	}
	return 0;
} 
