#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
	//[1, 4, 19, 10, 30, 34, 8 ]
	//Target Element = 8
	for(int i = 0; i < n; i++ ){
		if(arr[i] == target){    //here 1 will be compared with 8, when the target element is equal to the arr[i] then it will be printed
			return i;
		}
	}
	return -1;
}

int binarysearch(int arr[], int n, int target){
	//We should know which is the Lowest Index, Highest Index and we should keep checking the Central Index whether < > =
	
		int l = 0;
		int h = n-1;
		
		while(true){
			
			int middle = (l+h)/2;
			if(arr[middle] == target){
				return middle;
			}
			else if (arr[middle] > target){
				h = middle -1;
			}
			else
			{
				h = middle + 1;
			}
		}
	return -1;
}

int main(){
	
	//Step 1
	int arr[] = {1, 4, 19, 10, 30, 34, 8} ;  //As int takes 4 bytes by adding each integer values that is stored will give the output
	int n = sizeof(arr)/sizeof(int);  //As the 10th element is after the 3rd position so by adding all the three integer values the output shown will be 3, hence the stored element has before 3 integers i.e., 1, 4, 19  
	cout << linearSearch(arr, n, 10) << endl;
	
	//Step 2: - Binary Search for sorting 
	int arr2[] = {1, 4, 19, 30, 49, 88, 100, 101, 103, 109, 112, 119};
	int size = sizeof(arr2)/sizeof(int);
	cout << binarysearch(arr2, size, 112);
	return 0;
}

//It is said to be linear index because we start the indexing from the 0th elemet and go on till n-1th element
