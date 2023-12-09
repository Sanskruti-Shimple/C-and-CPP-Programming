#include<iostream>
using namespace std;

class val{
	int x;
	public:
		val(int x=0)
		{
			this ->x=x;
		}
		
};

main()
{
	val v;
	cout<<v;
}
