#include<stdio.h>
using namespace std;

void print(int arr[]){
	int n = sizeof(arr)/sizeof(arr[0]);
	int i;
	for(int i = 0; i<n; i++){
		printf("%d", arr[i]);
	}
	
	int main()
	{
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
		print(arr);
		return 0;
	}
}