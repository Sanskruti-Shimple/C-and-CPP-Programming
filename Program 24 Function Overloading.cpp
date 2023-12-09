#include<iostream>
using namespace std;

class student
{
	int roll, p,c,m;
	float tot;
	float per;
	
	public:
		student()
		{
			cout << "Enter Roll No:- ";
			cin >> roll;
			
			cout << "Enter Physics Marks:- ";
			cin >> p;
			
			cout << "Enter Chemistry Marks:- ";
			cin >> c;
			
			cout << "Enter Maths Marks:- ";
			cin >> m;
			
			op();
		}
		
		student ( int roll, int p, int c, int m)
		{
			
			this-> roll = roll;
			this-> p = p;
			this-> c = c;
			this-> m = m;
			
			op();
		}
		
		void op()
		{
			tot = p+c+m;
			per = tot/3 ;	
		}
		void display()
		{
		cout << roll << "\n" << p << "\n" << c << "\n" << m << "\n" << tot << "\n" << per << "\n";	
		}
};
		
		int main()
		{
			student s1;
			student s2(1, 30, 40, 50); 
			s2.display();
			s1.display();
		}


