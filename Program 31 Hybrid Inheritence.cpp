#include<iostream>

using namespace std;

class A
{
	public:
		int x, y;
		
	void accept()
	{
		cout<<"Enter x and y:- ";
		cin>>x>>y;
	}
};

class B: public A
{
	public:
		int z;
		
	void add()
	{
		z = x+y;
	}
};
class D
{
	public:
		int z1;
	void sub()
	{
		A b;
		b.x;
		b.y;
			z1=b.x-b.y;
	}
};
class C: public B, public D
{
	public:
		void display()
		{
			cout<<z;
			cout<<z1;
		}
};
int main()
{
	c.m;
	m.accept();
	m.add();
	m.sub();
	m.display();
}
