//enter any ASCII Number and return its corresponding character
#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter any number:");
	scanf("%d", &num);
	
	//implicit typecasting is used here(conversion of data type is done automatically)
	printf("%c", num);
	
	return 0;
}
