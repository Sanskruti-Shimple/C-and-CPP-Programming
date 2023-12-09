#include<iostream>
using namespace std;
template<class dynamic>

class val
{
	dynamic x;
	
	{
		this -> x = x;
	}
	
	void display()
	{
		cout<<x;
	}
};

main()
{
	val<int> v1(2);
	val<char> v2('a');
	
	v2.display();
	v1.display();
}
