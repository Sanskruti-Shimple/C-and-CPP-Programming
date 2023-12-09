// accept yhe month number and return number of days in given month

/*month having 28 days == 2
month having 30days ==4,6,9,11
months having 31 days == 1,3,5,7,8,10,12*/

#include<stdio.h>

int main()
{
	int m;
	
	printf("Enter month number:");
	scanf("%d",&m);
	
	if(m==2)
	{
		printf("month has 28 days");
	}
	else if(m==4||m==6||m==9||m==11)
	{
		printf("month has 30 days");
	}
	else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		printf("month has 31 days");
	}
	else 
	{
		printf("Invalid Input");
	}
	
	return 0;
}
