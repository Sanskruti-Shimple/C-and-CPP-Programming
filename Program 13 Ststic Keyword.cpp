#include<iostream>
using namespace std;

void dop()
{
	static int x=0;
	cout<<x;
	x++;
}

main()
{
	dop();
	dop();
	dop();
	dop();
	
}
