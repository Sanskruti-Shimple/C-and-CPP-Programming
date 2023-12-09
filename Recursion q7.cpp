#include<iostream>
using namespace std;

int fun(int i){
	if(i%2){
		return (i++);
	}
	else{
		return fun( fun(i-1) );
	}
}

int main(){
	cout << "Sanskruti Shimple, VIT Pune" << endl;
	int n = 10; //Even number will be given 
	fun(n);
	return 0;
	
}
