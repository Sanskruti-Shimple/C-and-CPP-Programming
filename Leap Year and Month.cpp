#include<stdio.h>
int main()
{
	int year, m;
	printf("Enter Year:- ");
	scanf("%d", &year);
	printf("Enter Month:- ");
	scanf("%d", &m);
	
	{
			
		if ((m==2) && (year%4==0) && (year%400==0) || (year%100!=0) )
		{
			printf("28 days");
		}
		else 
		{
			printf("Not a leap year", &year);
		}
		
				
	}
	
		return 0;
	}


