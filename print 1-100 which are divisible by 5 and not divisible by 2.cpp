#include<stdio.h>
int main()
{
	int i, n;
	
	printf("Enter i:- \n");
	scanf("%d", &n);
	
	for(i=1; i<=100; i++)
	{
		
		if(i%n==5)
		{
			printf("Number is dividible by 5");
		}
		
		else(i%n==2);
		
		{
			printf("Number is not divisible by 2");
		}
	}
}
