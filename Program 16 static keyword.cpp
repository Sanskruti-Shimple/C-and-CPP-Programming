#include<iostream>
using namespace std;

class Acc
{
	int id;
	static int branchNo;
	public:
		Acc(int id)
		{
			this -> id = id;
			 
		}
		void display()
		{
			cout<<id<<"\t"<<branchNo;
		}
};

        int Acc::branchNo=102;
        
		main()
		{
			Acc a(2), b(3);
			a.display();
			b.display();
			
		}

