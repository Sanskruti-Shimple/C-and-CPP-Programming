/*Accept Roll No., marks of physics , Chemistry, Maths from user and return total , percerntage in float.*/

#include<stdio.h>

int main()
{
	//define the variables
	int roll , phy , chem , math , tot;
	float per;
	
	//accept the variables
	
	printf("enter your roll number:");
	scanf("%d",&roll);
	
	printf("enter your phy marks:");
	scanf("%d", &phy);
	
	printf("enter your chem marks:");
	scanf("%d", &chem);
	
	printf("enter your math marks:");
	scanf("%d",&math);
	
	tot=phy+chem+math;
	
	per=(float)tot/3; // explicit typecasting(data type are converted using function (float))
	
	printf("%d | %d | %d | %d |%d | %f", roll, phy, chem, math, tot, per);
	
	return 0;
}
