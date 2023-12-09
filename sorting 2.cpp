#include<iostream>
using namespace std;

void selectionSort(int arr, int n){
	for(int i = 0; i<n; i++){
		int minimum_element_index = i;
		
		
		// 0th index
		
		//Better minimum element index in range [i+1 to i-1]
		for(int j = i+1; j < n; j++){
			if (arr[j] < arr[minimum_element_index]{
				minimum_element_index = j;
			}
		}
		
		// Swap ith element, with element at minimum_element_index
		int temp = arr[i];
		arr[i] = arr[minimum_element_index];
        arr[minimum_element_index] = temp;
	}

void printArray(int arr, int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	
	cout << endl;
}

int main(){
	cout << "Sanskruti Shimple";
	
	// Step 1
	int arr[] = {4, 19, 30, 1, 34, 8 };
	//Swap elements at index 0 and 3
	sizeof n = sizeof(arr)/sizeof(i);
	selectionSort (arr, n);
	printArray (arr, n);
	
	return 0;

}
