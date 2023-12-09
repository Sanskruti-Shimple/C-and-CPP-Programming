#include<iostream>
using namespace std;

 void add (int x, int y)
 {
 	int z;
 	z=x+y;
 	cout<<z;
 }
 
 void add (int x, int y, int z)
 {
 	int p;
 	p=x+y+z;
 	cout<<p;
 };
 
 main()
 {
 	add (4,9); 
 	cout<<"\n";
 	add (4,9,8);
 	cout<<"\n";
 }
