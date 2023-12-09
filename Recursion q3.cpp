#include<iostream>
using namespace std;

void fun (int x){
	if(x>0){
		fun (x--);  //Stack Overflow So the memory will be blocked and the os gives a fault of segmentation (The program will not execute due to the memory blocked)
		cout << x << "";
		fun (--x);
	}
}

int main(){
	int a = 4; 
	fun (a);
	return 0;
}

