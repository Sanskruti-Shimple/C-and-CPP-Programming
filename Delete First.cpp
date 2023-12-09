#include<iostream>
using namespace std;

struct node
{
	int data;
	node *prev, *next;
};

void delf()
{
	if(h==NULL)
	{
		underflow;
	}
	else if(h->next=NULL)
	{
		free(h);
		h=NULL;
	}
	else 
	{
		p = h;
	h = h -> next;
	h -> prev = NULL;
	free(h);	
	}
}
