#include<iostream>

using namespace std;

class A
{
	public:
		int x,y;
		void accept()
		{
			cout<<"Enter x & y:- ";
			cin>>x>>y;
		}
};

class B : public A
{
	public:
		int ans ;
		void add(int a, int b)
		{
			ans = a+b;
		}
};
class C : public A
{
	public:
		void display()
		{
			B b;
			b.add(x,y);
			cout<<b.ans;
		}
};

int main()
{
	C c;
	c.accept();
	c.display();
}
