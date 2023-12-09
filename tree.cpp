#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left,*right;
	node*create node(int data)
	{
		r=new node;
		r->data=data;
		r->left=r->right=NULL;
		return r;
	}
	node *insert(node *r, int data)
	{
		if(r==NULL)
		{
			return create node(data);
		}
		else if(data<r->data)
		{
			r->left=insert(r->left,data);
		}
		else if(data>r->data)
		{
			r->insert(r->right,data);
		}
	}
	return 0;
}
