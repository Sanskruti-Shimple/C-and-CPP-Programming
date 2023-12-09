#include<stdio.h>
int main()
{
	float km, m, cm, ft, inch;
	printf("\nEnter The Distance In Kilometers:- ");
	scanf("%f", &km);
	m = km*1000;
	cm = m*100;
	inch = cm/2.54;
	ft = inch/12;
	printf("Distance In Meters = %f\n", m);
	printf("Distance In Centimeter = %f\n", cm);
	printf("Distance In Feet = %f\n", ft);
	printf("Distance In Inches = %f\n", inch);
	return 0;
}
