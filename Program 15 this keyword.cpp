#include<iostream>
using namespace std;

class Acc
{
	int id;
	int branchNo = 101;
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
	    int	main()
		{
			Acc a(2), b(3);
			a.display();
			b.display();
		}

