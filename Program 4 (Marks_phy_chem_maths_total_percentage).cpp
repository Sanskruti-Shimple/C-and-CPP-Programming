#include<iostream>
using namespace std;

class student
{
	int roll, phy, chem, maths, tot;
	float per;
	
	public:
		
	void accept()
	{
		cout<<"Enter Roll No:- ";
		cin>>roll;
		
		cout<<"Enter Physics Marks:- ";
		cin>>phy;
		
		cout<<"Enter Chemistry Marks:- ";
		cin>>chem;
		
		cout<<"Enter Maths Marks:- ";
		cin>>maths;
	}
	
	void open()
	{
		tot = phy + chem + maths;
		per = (float)tot/3;
	}
	
	void display()
	{
		cout<<"\n\n\nResults"<<"\nYour Roll No is:- "<<roll<<"\t \nYour Physics Marks is:- "<<phy<<"\t \nYour Chemistry Marks is:- "<<chem<<"\t \nYour Maths Marks is:- "<<maths<<"\t \nTotal:- "<<tot<<"\t \n Your Percentage is:- "<<per;
	}
};

main()
{
	student s;
	
	s.accept();
	s.open();
	s.display();
}
