#include<iostream>
using namespace std;

class val
{
	int x;
	
	public:
		val(int x)
		{
		this-> x=x;
		}
		void display()
		{
			cout<<x;
		}
};
 
  int main()
  {
  	val v(10);
  	v.display();
  }
