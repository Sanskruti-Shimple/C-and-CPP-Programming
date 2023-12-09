#include<stdio.h>
int main()
{
	int arr[7] = { 10, 20, 30, 40, 100 , 150, 225};
	//*p = &arr[0];
	int *p = arr;
	//writing "arr" gives pointer to its head (1st) element
	printf(" %d %d %d %d ", *p, *(p+1), *(p+2), *(p+3), *(p+4));
	printf(" \n \n %x %x %x %x", p, (p+1), (p+2), (p+3), (p+4));
	return 0;
}
