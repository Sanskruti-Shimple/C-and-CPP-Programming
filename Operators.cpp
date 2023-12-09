#include<iostream>
using namespace std;

void showHelloWorld(){
	cout << "Hello World!" << endl;
	cout << "Sanskruti" << "VIT, Pune" << endl;
}

int main(){
	//step
	int a = 10;
	int b = 20;
	int c = a/b;
	
	cout << "Sum:- " << (a+b) << endl;
	cout << "Diff:- " << (a-b) << endl;
	cout << "Multiply:- " << (a*b) << endl;
	cout << "Divide:- " << (a/b) << endl;
	cout << "Mod:- " << (a%b) << endl;
	a++; 
	cout << "After increment:- " << a << endl;
	a--; 
	cout << "After decrement:- " << a << endl;
	
	int d = ++a;
	cout << "Pre-increment:- " << d << endl; 
	int e = a++;
	cout << "Post-Increment:- " << e << endl;
	cout << "Value of a:- " << a << endl;
	
//	bool checkValue = (a==17);
//	cout << checkValue << endl;
	
	bool checkValue = (a<=17);
	cout << checkValue << endl;
}
