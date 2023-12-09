#include<stdio.h>
main()
{
	int a, b, c, d, max;
	printf("Enter a:- ");
	scanf("%d", &a);
	printf("Enter b:- ");
	scanf("%d", &b);
	printf("Enter c:- ");
	scanf("%d", &c);
	printf("Enter d:- ");
	scanf("%d", &d);
	max = ( (a>b && a>c && a>d) ? a : (b>c && b>d) ? b : (c>d)? c : d );
	printf("Max no is:- %d" , max);
	
	return 0;
}
