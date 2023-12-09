//enter lowercase alphabet and return its corresponding uppercase alphabet
#include<stdio.h>

int main()
{
	char ch;
	
	printf("enter any small case alphabet:");
	scanf("%c",&ch);
	
	ch=ch-32;   //there is difference of 32 in every small case and its corresponding uppercase alphabet ( A=65 and a=97)  and also typecasting is done automaticaly here  
	printf("%c", ch);
	
	return 0;
}


