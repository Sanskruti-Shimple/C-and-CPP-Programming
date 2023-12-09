#include<iostream>
using namespace std;

class val{
	int x;
	public:
		val(int x = 0)
		{
			this -> x=x;
		}
		friend ostream & operator << (ostream &out , val &z);
};

 ostream & operator << (ostream &out , val &z)
 {
 	out << z.x;
 	return out;
 }
 
 main()
{
	val v1(10);
	cout << v1;
}
