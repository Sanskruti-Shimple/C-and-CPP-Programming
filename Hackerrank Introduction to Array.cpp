#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[1000];
    
    int n; 
    for(int i = 0; i <  n; i++){
        cin >> arr[i];
    }
    //0, 1, 2, 3, ....... n-1
    for(int i = n-1; i >= 0; i-- )
    {
        cout << arr[i] << i;
    }
}

