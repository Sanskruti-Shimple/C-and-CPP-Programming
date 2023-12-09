#include<iostream>
using namespace std;

int main(){
	
	cout << "Sanskruti";
	
	//Step 1
	int i;
	int arr[] = {1, 2, 3, 4};
	
	for(i=0; i<4; i++){
		cout << arr[i] << endl;
	}
	
	//Step 2
	for(i=0; i<4; i++){
		arr[i] = arr[i]+100;
	}
	for(i=0; i<4; i++){
		cout << arr[i] << endl;
	}
	
	//Step 3
	int sum =0;
	for(i=0; i<4; i++){
		cin >> arr[i];
		sum = sum + arr[i];
	}
	cout << sum << endl;
	
	char matrix [3][3];
	
/*	// Step 4
	
	int score [3] [4] =     {
		                 {7, 7, 8, 9};
		                 {9, 9, 8, 8};
		                 {9, 9, 9, 10};
		                    };
		                    
//	arr [0] [0] , arr [1] [2]; //1)=> 7, 2=> 8
*/

// Step 5
         for(int i = 0; i < 3; i++){
         	for(int j = 0; j < 3; j++)
         	cin >> matrix [i] [j];
		 }
		 for(int i = 0; i < 3; i++){
		 	for(int j = 0; j < 3; j++){
		 		cout << matrix [i] [j];
			 }
			 cout << endl;
			 
		 }
	
	
}
