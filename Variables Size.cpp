#include<iostream>
#define CHESS_WIDTH 8 //Macro
#define true false

using namespace std;

//Global Variable
int a =10;

void showHelloWorld(){
	cout << "Hello World!" << endl;
	cout << "Sanskruti" << endl << "VIT, Pune" << endl;
	a = 20; //Different Memory Location  //1) born here 
	cout << "inner a:- " << a << endl;   //2) die here
}


int main(){
	//Declaration of a variable
	bool success = true;
	bool found = true;
	
	found = false;
	
	//Assigning a value
	char nameFirstletter = 'S';
	
	int number = 1078;
	float num = 3.09;
	double val = 4.444;
	
	showHelloWorld();
	
	cout << "bool size:- " << sizeof(bool) << endl;
	cout << "char size:- " << sizeof(char) << endl;
	cout << "int size:- " << sizeof(int) << endl;
	cout << "float size:- " << sizeof(float) << endl;
	cout << "double size:- " << sizeof(double) <<endl;
	cout << "long long int size:- " << sizeof(long long int) <<endl;
	
	cout << success << nameFirstletter << number << val << endl;
	
	//step 2 
	cout << "Global Value: " << a << endl;
	
	//Step 3
	const int SECONDS_IN_HOUR = 3600; //constant should be written in Capital
//	SECONDS_IN_HOUR = 223; //We can not assign new value
	cout << "Seconds per hour:- " << SECONDS_IN_HOUR << endl;
	cout << CHESS_WIDTH << endl ;  //Pre-Processor 
//	bool found = true;
	cout << found << endl;
	
	return 0;
	
}
