#include<stdio.h>
main()
{
	int n, th, fi, h, f, tw, t, c5 , c2, c1;
	printf("Enter Amount:- ");
	scanf("%d", &n);
	
	th= n/2000;
	n = n%1000;
	printf("No. of two thousand notes required is:- %d\n", th);
	
	fi= n/500;
	n = n%500;
	printf("No. of five hundred notes required is:- %d\n", fi);
	
	h= n/100;
	n = n%100;
	printf("No. of hundred notes required is:- %d\n", h);
	
	
	f= n/50;
	n = n%50;
	printf("No. of fifty notes required is:- %d\n", f);
	
	tw= n/20;
	n = n%20;
	printf("No. of twenty notes required is:- %d\n", tw);
	
	t= n/10;
	n= n%10;
	printf("No. of ten notes required is:- %d\n", t);
	
	c5= n/5;
	n= n%5;
	printf("No. of five rupee coin required is:- %d\n", c5);
	
	c2= n/2;
	n= n%2;
	printf("No. of two rupee coin required is:- %d\n", c2);
	
	c1= n/1;
	printf("No. of one rupee coin required is:- %d\n", c1);
	
	return 0;
	
}
