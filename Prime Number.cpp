#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n){
	//n=10
	for(int i=2; i<2; i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

//Number Theory
//Print Prime Number till 100

int main(){
	int n = 100;
	for(int i=2; i<=n; i++){
		if(isPrime(i))
		cout << i << endl;
	}
	return 0;
}