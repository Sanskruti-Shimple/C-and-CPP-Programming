#include<iostream>
using namespace std;

class Demo
{
	int x;
	public:
		Demo(int a = 0)
		{
			x=a;
		}
		void display()
		{
			cout<<x;
		}
};
        int main() 
        {
        Demo d;
        d.display();
		}
