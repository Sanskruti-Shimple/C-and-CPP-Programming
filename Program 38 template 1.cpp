#include<iostream>
using namespace std;

template <class dynamic>
dynamic add(dynamic a, dynamic b)
{
	return a+b;
}
main()
{
	cout<<add(3,4);
	cout<<"\n";
	cout<<add(3.14,9.2);
	cout<<"\n";
	cout<<add('B','A');
	cout<<"\n";
}
