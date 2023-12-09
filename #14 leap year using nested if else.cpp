 // accept year from user and state wheter it is leap or not using nested if else
 /* for the year to be leap
 1st condition :- it should be dividible by 400
 2nd condition :- it shouldn`t be divisible by 100
 3rd condition :- it should be divisible by 4*/
 
 #include<stdio.h>
 
 int main()
 {
	int year;
	
	printf("enter year:");
	scanf("%d", &year);
	
	if(year%400==0)
	{
		printf("year is leap year");
	}
	else
	{
		if(year%100!=0)
		{
			if(year%4==0)               // year should not be divisible by 100 but must divisible by 4
			{
			printf("year is leap year");
			}
		}
		else
		{
			printf("year is not a leap year");
		}
	}
	
	return 0;
	
	
 }
