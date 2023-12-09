#include<iostream>
using namespace std;

 void add (int x, int y)
 {
 	int z;
 	z = x+y;
 	cout<<z;
 }
 
  void add (double x, double y)
  {
  	
  	double p;
  	p = x+y;
  	cout<<p;
  	
  };
  
  main ()
  {
  	add (4, 9);
  	cout<<"\n";
  	add (4.1, 9.8);
  	cout<<"\n";
  }
