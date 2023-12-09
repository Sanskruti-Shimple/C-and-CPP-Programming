#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>vect;
	
	if(vect.empty())
	cout << "Vector is Empty" << endl;
	
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	
	if(!vect.empty())
	cout << "Vector is Not Empty" << endl;
	
	return 0;
}