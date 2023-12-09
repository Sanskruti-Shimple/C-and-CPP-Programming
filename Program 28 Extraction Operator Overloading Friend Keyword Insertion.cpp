#include<iostream>
using namespace std;

class val{
	int x;
	public:
		val(int x=0)
		{
			this -> x=x;
		}
		
	friend istream & operator >> (istream &in, val z) ;
};

 istream & operator >> (istream &in, val z) 
{
	cin>>z.x;
	return in;
}
main()
{
	val v1(10);
	cin>>v1;
}
