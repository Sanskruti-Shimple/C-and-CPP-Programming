//enter two variables and swap their values

#include<stdio.h>

int main()
{
	
	int a,b,c;
	
	printf("Enter 1st number:");
	scanf("%d", &a);
	
	printf("Enter 2nd number:");
	scanf("%d",&b);
	
	printf("before swap a=%d \t b=%d\n",a,b);
	
	c=a;  //assign value of a to c ,  therefore c=5 and a=null
	a=b;  // assign value of b to a , therefore a=4 and b= null
	b=c;  //assign value of c to b , therefore b=5
	
	printf("after swap a=%d \t b=%d",a,b);
	
	return 0;
	
	
}

// as we use 3rd variable  memory requirement increases
