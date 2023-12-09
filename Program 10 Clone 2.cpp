#include<iostream>
using namespace std;

class val
{
	int x;
	
	public:
		val()
		{
			cout <<"Enter x";
			cin >>x;
		}
	val(val &z)
	{
		x=z.x;
	}
	void display()
	{
		cout<<x;
	}
};

int main()
{
	val v,v1(v);
	v1.display();
}
