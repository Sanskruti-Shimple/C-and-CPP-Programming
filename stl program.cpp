#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<string>v;
	v.push_back("Shambhavi");
	v.push_back("Samruddhi");
	v.push_back("Sanskruti");
	
	for(vector<string::iterator itr:v.begin;itr!=v.end();itr++)
	{
	cout<<*itr<<"";
	}
}
