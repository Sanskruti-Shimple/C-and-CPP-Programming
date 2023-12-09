#include<iostream>
using namespace std;

class val
{
	int x;
	public:
		val()
		{
			this-> x=100;
		}
		
		val(int x)
		{
			this-> x = x;
		}
		
		void display()
		{
			cout << x;
		}
};

    main()
    {
    	val v(2), v1;
    	v1.display();
    	v.display();
	}
