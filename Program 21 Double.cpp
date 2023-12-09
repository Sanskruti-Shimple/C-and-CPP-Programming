#include<iostream>
using namespace std;

void accept(int x)
{
	cout << "int received";
}
void accept(double x)
{
	cout << "Fractional Number";
}
main()
{
	accept(1.2);
}
