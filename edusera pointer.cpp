#include<stdio.h>
int main()
{
	int var = 10;
	int *p = &var;
	//& = address of or, and referencing operator
	//* = value of or, and dereferencing operator
	int **p2 = &p;//pointer to a pointer 
	printf("%x\n%x", p, p2);
	return 0;
}
