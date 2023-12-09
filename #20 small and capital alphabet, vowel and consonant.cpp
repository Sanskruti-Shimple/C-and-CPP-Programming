// accept small as well as capital alphabet and state whether it is vowel or consonant

#include<stdio.h>

int main()
{
	char ch;
	printf("enter any alphabet:");
	scanf("%c",&ch);
	
	if((ch>='a'&&ch<='z') || ch>='A'&& ch<='Z')
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			printf("vowel");
		}
		else 
		{
			printf("consonant");
		}
	}
	else 
	{
		printf("Invalid Input");	
	}
	
	return 0;
}
