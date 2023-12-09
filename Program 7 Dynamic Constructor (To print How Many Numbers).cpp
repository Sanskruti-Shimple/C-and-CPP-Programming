#include<iostream>
using namespace std;

class Demo
{
	int n, *a, i;
	
	public:
	 Demo()
	 {
	 	cout<<"How Many Number:- ";
	 	cin>>n;
	 	a = new int[n];
	 	
	 	for (i=0; i<n; i++)
	 	{
	 		cin>>a[i];
		}
	 }
	 void display()
	{
	 	for(i=0; i<n; i++)
	 
	 {
	 	cout<<a[i]<<"\t";
	 }
	 
	}
};
	int main()
	{
		Demo d;
		d.display();
	}
