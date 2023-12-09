#include<stdio.h>
int main()
{
	float bp, da, hra, grpay;
	printf("\nEnter basic salary of ramesh:- ");
	scanf("%f", &bp);
	da = 0.4*bp;
	hra = 0.2*bp;
	grpay = bp + da + hra;
	printf("Basic Salary Of Ramesh = %f\n", bp);
	printf("Dearness Allowance = %f\n", da);
	printf("House Rent Allowance = %f\n", hra);
	printf("Gross Pay Of Ramesh Is %f\n", grpay);
	return 0;
	
}
