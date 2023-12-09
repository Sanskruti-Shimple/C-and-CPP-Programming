#include<stdio.h>
int main()
{
	int m1, m2, m3, m4, m5, per;
	printf("Enter Marks Of Five Subjects:- ");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
	per = m1+m2+m3+m4+m5/100*500;
	if(per>=60)
	printf("Frist Division");
	else if(per>=50)
	printf("Second Division");
	else if(per>=40)
	printf("Third Division");
	else 
	printf("Fail");
	return 0;
	
}
