#include<iostream>
using namespace std;

class val
{
	int x;
	public:
		val(int x=0)
		{
			this->x=x;
		}
		
	void display()
	{
		cout<<x;
	}
	val operator(val z)
	{
		val Q;
		Q.x = x+z.x;
		return Q;	
	}
};

 main()
 {
 	val v1(2), v2(3), v3;
 	v3=v1+v2;
 	v3.display();
 }

