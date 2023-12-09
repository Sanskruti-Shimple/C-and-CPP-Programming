#include<iostream>

using namespace std;

class A
{
	public:
		int x, y;
	void accept()
	{
		cout<<"Enter x,y";
		cin>>x>>y;
	}
};
class B :public A
{
	public:
		
}
