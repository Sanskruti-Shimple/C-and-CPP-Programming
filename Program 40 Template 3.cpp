#include<iostream>
using namespace std;
template<class dynamic>
dynamic add(dynamic a, dynamic b)
{
	cout<<"Template and Function";
	return a+b;
	
}
int add(int a, int b)
{
	cout<<"Normal Function";
	return a+b;
}
main()
{
	cout<<add(3,4);
	cout<<"\n";
	cout<<add(3.14,9.20);
	cout<<"\n";
}

