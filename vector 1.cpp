#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>vect;
	vect.push_back(2);
	vect.push_back(3);
	
	for(int i = 0; i<vect.size(); i++){
		cout << vect[i];
	}
	return 0;
}