#include<iostream>
using namespace std;

struct node()
{
	int data;
	node *prev, *next;
};

node *n, *p, *q;

void createnode(int data)
{ 
	h=new node();
	h->data=data;
	h->prev=NULL;
	h->next=NULL;
}

void deletelast()
{
	if(n=NULL)
	{
		underflow;
	}
	else if(h->next==NULL)
	{
		free(h);
		h=NULL;
	}
	else
	{
		p=h;
		while(p->next->next!=NULL)
		{
			p=p->next;
			free(q);
			p->next=NULL;
		}
	}
	p->next=q;
}
