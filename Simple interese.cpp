#include<stdio.h>
int main()
{
	
int p, n, count;
float r, si;
count = 1;

while(count<=3)
{
	printf("Enter the value of p, n and r:- ");
	scanf("%d%d%f", &p, &n, &r);
	
	si = p*n*r/100;
	printf("Simple Interese = Rs. %f\n", si);
	count = count+1;
}
return 0;
	
}
