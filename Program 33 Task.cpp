#include<iostream>
using namespace std;

class A
{
	public:
		int x,y;
		void accept()
		{
			cout<<"Enter x:";
			cin>>x;
			cout<<"Enter y:";
			cin>>y;
		}
};

class B: public A
{
	public : int ad;
	void add()
	{
		ad = x+y;
	}
};
class C 
{
	public:
		int sb;
		void sub (int a , int b)
		{
			sb = a-b;
		}
};
class D: public B, public
{
	void display()
	{
		add();
		sub(x,y);
		cout<<ad;
		cout<<sb;
	}
 };
 int main()
 {
 	D d;
 	d.accept();
 	d.display();
  } 
