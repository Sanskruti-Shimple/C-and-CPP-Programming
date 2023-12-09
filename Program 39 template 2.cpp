#include<iostream>
using namespace std;

template<class dynamic>
template<class dynamo>

dynamic add (dynamic a, dynamo b)

{
return a+b;
}

main()
{
	cout<<add(3, 1.1);
	cout<<"\n";
	cout<<add(3.14, 9.20);
	cout<<"\n";
	cout<<add('B','C');
	cout<<"\n";
	
}
