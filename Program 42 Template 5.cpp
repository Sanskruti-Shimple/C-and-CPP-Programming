#include<iostream>
using namespace std;
template<class dynamic>
class complex
{
	dynamic i, r;
	public:
		
		val(dynamic i, dynamic r)	
		{
			this -> i=i;
			this -> r=r;
		}
		
	void display()
	{
		cout<<i<<"+j"<<r;
	}
	
};

main()
{
	val <int,int> (3,4);
	val <double,double> (3.1,3.4);
	
	v2.display();
	v1.display();
}
