#include<iostream>
using namespace std;

node *delete(node*r, int data)
{
	if(r==NULL)
	{
	return NULL;
	}
	else if(data<r->data)
	{
		r->left=delete(r->left;data);
	}
	else if(data>r->data)
	{
		r->right=delete(r->right,data);
	}
	else
	{
		if(r->left==NULL && r->right==NULL)
		{
			free(r)
			return NULL;
		}
		else if(r->left=NULL)
	}
}
