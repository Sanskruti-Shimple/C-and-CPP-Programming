#include<iostream>
using namespace std;

int main(){
	cout << "Sanskruti" << endl;


int sum = 0;
//Step 1: While Loop
int counter = 1;
//Condition
while(counter<=10){
	sum = sum + counter;
	counter = counter + 1;
}

cout << "Sum of [1-10] = " << sum << endl; 


//Do-While Loop 
//The condition will be check down here

/*do{
	//Write your logic here 
	//The loop will atleast run once
}
while(){
	
}
*/


// For Loop
//for (initialization; condition; after loop execution)
 sum = 0;
for(int counter = 1; counter <= 10; counter++){
	sum = sum + counter;
}
cout << "Sum of [1-10] = " << sum << endl; 

// Step 3
int n;
int total = 0;
// 0, 1, 2, 3, 4
for ( int counter = 0; counter < 5; counter++)
{
	cin >> n;
	total = total + n;
}
cout << "Total= " << total << endl; 


return 0;
}
