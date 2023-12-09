//Functions

#include<iostream>
using namespace std;
	int sum (int a, int b);
	int sum(int a, int b, int c);

bool isPrime (int n){
	if(n<2) return false;


for(int i = 2; i < n; i++){
	// We will check that n can be divided by 2, 3, 4, 5, ..... till n-1
	if(n%i==0)
	{
		return false;
	}
  }
    return true;
}

// Step 1
// Sum of two numbers
// Calling a Function with arguments

int ans = sum(5,10);
cout << ans << endl;

// Step 2
cout << sum(5, 10, 20) << endl;

// Step 3
// Print all Prime Numbers till 100
for(int i=2;i<=100;i++){
	if(isPrime (i) ){
		cout << i << endl;
	}
}

return 0;

