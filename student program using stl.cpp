#include<iostream>
#include<vector>
using namespace std;

class student
{
	int roll,p,c,m,t;
	float per;
	public:
		void accept()
		{
			cout<<"Enter Roll No:- ";
			cin>>roll;
			cout<<"Enter Physics Marks:- ";
			cin>>p;
			cout<<"Enter Chemistry Marks:- ";
			cin>>c;
			cout<<"Enter Maths Marks:- ";
			cin>>m;
		}
		void calculate()
		{
			t=p+c+m;
			per=t/3;
		}
		void display()
		{
			cout<<roll<<"\t"<<p<<"\t"<<c<<"\t"<<m<<"\t"<<t<<"\t"<<per<<endl;
		}
};

int main()
{
	vector<student>v;
	int i,n;
	
	cout<<"How many student:- ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		student s;
		s.accept();
		s.calculate();
		v.push_back(s);
	}
	
	for(vector<student>::iterator itr = v.begin();itr!=v.end();itr++)
	{
		student s=*itr;
		s.display();
	}
	return 0;
}
