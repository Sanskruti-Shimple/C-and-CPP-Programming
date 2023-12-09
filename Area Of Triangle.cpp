#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, sp, area;
	printf("\nEnter Sides Of a Triangle:- ");
	scanf("%f%f%f", &a, &b, &c);
	sp = (a+b+c)/2;
	area = sqrt (sp*(sp-a)*(sp-b)*(sp-c));
	printf("Area Of Triangle = %f\n", area);
	return 0;
}
