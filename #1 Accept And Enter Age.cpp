//Enter your age and 
#include<stdio.h>

int main()
{
	int age;
	
	printf("Enter Your Age");
	scanf("%d", &age); // & is used to define the address of the variable
	
	printf("You Have Enterd Your Age As %d",age);
	
	return 0;
}
