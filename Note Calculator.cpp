#include<stdio.h>
main()
{
	int n, h, f, t;
	printf("Enter Amount:- ");
	scanf("%d", &n);
	
	h= n/100;
	n = n%100;
	printf("No. of hundred notes required is:- %d\n", h);
	
	
	f= n/50;
	n = n%50;
	printf("No. of fifty notes required is:- %d\n", f);
	
	t= n/10;
	n= n%10;
	printf("No. of ten notes required is:- %d\n", t);
	
	
	return 0;
	
	
	
}
