#include<iostream>
using namespace std; 

class val{
	int x;
	public:
		
		val(int x=0)
		{
			this -> x=x;
		}
		
	friend void display (val z);
};
void display (val z)
{
	cout << z.x;
}
main()
{
	val v1(10);
	display(v1);
}
