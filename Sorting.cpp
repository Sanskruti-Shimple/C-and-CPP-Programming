#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	vector<int>vect;
	int num;
	
	for(int i=0; i<5; i++){
		cin>>num; //input
		vect.push_back(num);		
	}
	
	sort(vect.begin(), vect.end());
	
	for(int i=0; i<5; i++){
		cout << vect[i] << " , ";
	}
	return 0;
}