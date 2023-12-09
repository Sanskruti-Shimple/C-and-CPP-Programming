#include<stdio.h>
int main()
{
	int r,s,a, young;
	printf("\nEnter Age Of Ram, Shyam, Ajay:- ");
	scanf("%d%d%d, &r, &s, &a");
	
	if(r<s)
	{
		if(r<a)
		young = r;
		
		else
		 young = a;
	}
	else
	{
		if(s<a)
		   young = s;
		else 
		   young = a;	   
	}
	
	printf("The Youngest Of Ram(%d), Shyam(%d), and Ajay(%d) is%d\n", r,s,a,young);
	return 0;
}
