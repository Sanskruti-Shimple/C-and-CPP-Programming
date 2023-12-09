//Accept age from user and show whether he/she is eligible to vote or not (using else)

#include<stdio.h>

int main()
{
	int age;
	
	printf("enter your age:");
	scanf("%d", &age);
	
	if(age>=18)
	{
		printf("you can vote now!!");
	}
	
	return 0;
}
