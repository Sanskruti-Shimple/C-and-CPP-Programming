#include<iostream>

using namespace std;

class A
{
	public:
		int x;
		
	void acceptX()
	{
		cout<<"Enter x:- ";
		cin>>x;
	}
};

class B : public A
{
	public:
		int y;
		
	void acceptY()
	{
		cout<<"Enter y:- ";
		cin>>y;
	}
};

class C : public B
{
	public:
		void display()
		{
			cout<< x + y;
		}
};
int main()
{
	C mul;
	mul.acceptX();
	mul.acceptY();
	mul.display();
}

