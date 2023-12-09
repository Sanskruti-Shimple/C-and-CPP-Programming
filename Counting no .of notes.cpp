#include<stdio.h>
int main()
{
	int a[3]  = {100, 50, 10}, m, temp, i;
	
	printf("Enter amount:- ");
	
	scanf("%d", &m);
	temp = m;
	
	 for (i=0;i<3;i++)
	 {
	 	printf("\n%d notes is: %d", a[i], temp/a[i]);
	 	temp=temp%a[i];
	 
	 }	 
}
