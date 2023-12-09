#include<iostream>
using namespace std;

class A
{
	public:
		int x,y,z;
		void accept()
		{
			cout<<"Enter x:";
			cout<<"Enter y:";
			cin>>x,y;
		}
};

class B: public A
{
	public:
    int z;
    
    void add()
    {
    	z=x+y;
	}
};

class C : public B
{
	public:
		void display()
		
		{
			cout<<"z";
		}
};

main()
{
	C obj;
	obj.accept();
	obj.add();
	obj.display();
}


