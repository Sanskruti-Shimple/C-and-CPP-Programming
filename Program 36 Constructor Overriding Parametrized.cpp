#include<iostream>
using namespace std;

class base 
{
	public:
		base()
		{
			cout<<"Default Base";
		}
};

class child: public base
{
	public:
	child()
	{
		cout<<"Default Child";
	}

child (int a)


	{
	cout <<"Para Child";
    }
};

main()
{
	child c;
	child c1 (2);
}
