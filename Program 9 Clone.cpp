#include<iostream>
using namespace std;

class val
{
	int x;
	
	public:
		val(int a=0)
		{
			x=a;
		}
	val(val&z)
	{
		x=z.x;
	}
	void display()
	{
		cout<< x;
		
	}
};

 int main()
{
	val v(10), v1(v);
	v.display();
}
