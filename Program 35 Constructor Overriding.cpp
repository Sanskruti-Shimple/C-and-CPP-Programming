#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"Hello A";
		}
};

class B
{
	public:
		
		B()
		{
			cout<<"Hello B";
		}
};

main()
{
	A a;
	B b;
}
