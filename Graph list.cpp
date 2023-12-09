#include<stdio.h>
#include<vector>
using namespace std;

void addEdge(vector<int>adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void display(vector<int>adj[], int v)
{
	for(int i=0; i<v; i++)
	{
		cout<<i;
		for(int val: adj[i])
		{
			cout<<"->"<<val;
		}
		cout<<"\n";
	}
}
int main()
{
	int v=4;
	vector<int>adg[v];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
display(adj,v);
}

