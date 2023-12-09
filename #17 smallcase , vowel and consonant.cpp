//accept any small case alphabet and state whether it vowel or consonant

#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter any alphabet:");
	scanf("%c", &ch);
	
	if(ch>='a'&& ch<='z')
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("Entered alphabet is vowel");
		}
		else
		{
			printf("Entered alphabet is consonant");
		}
	}
	else
	{
		printf("invalid Input");
	}
	
	return 0;
}
