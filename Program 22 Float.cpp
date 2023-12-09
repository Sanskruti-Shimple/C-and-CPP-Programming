#include<iostream>
using namespace std;

void accept (int x)
{
	cout << "Int Received";
}
void accept(float x)

{
	cout << "Fractional Number";
}

main()
{
	accept ((float)1.2);
}
