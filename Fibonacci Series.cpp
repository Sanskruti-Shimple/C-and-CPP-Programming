#include<iostream>
using namespace std;

// f(n) = f(n-1) + f(n-2);  f(1) = f(0) = 1
//f(1) = f(0) = 1

int f (int n){
	if(n<2){
		return 1;
		
		return f(n-1) + f(n-2);
	}
}

int main(){
	
	return 0;
}

//When a function is calling itself then it is called as recursion

