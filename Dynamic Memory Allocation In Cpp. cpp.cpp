/*Dynamic Memory Allocation */
#include<iostream>
using namespace std;

class demo
{
	int n, *a, i;
	
	public:
		demo()
		
		{
			cout<<"How many numbers:-";
			cin>>i;
			a = new int [n];
			
			for(i=0; i<n; i++)
			{
				cin>>a[i];
			}
			
		};
		
		void display()
		{
			for(i=0; i<n; i++)
			{
				cout<<a[i]<<"\t";
			}
		};
		
		int main()
		{
			demo d;
			d.display();
		}
		
}
