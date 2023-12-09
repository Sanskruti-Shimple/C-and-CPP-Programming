#include<iostream>
using namespace std;

void create node(int data)
{
	h=new node();
	h->next=NUL;
	h->data=data;
	top=h;
}
void push(int data)
{
	if push(int data)
	{
		if(h==NULL)
		{
			create node (data)
		}
		else
		{
			q=new node();
			top->next=q;
			q->next=NULL;
			q->data=data;
			top q;
		}
	}
	void pop()
	{
		if(h==NULL)
		{
			cout<<"underflow";
		}
		else if(h==top)
		{
			free(h);
			h=top=NULL;
		}
		else
		{
			p=h;
			while(p->next!=top)
			{
				p=p->next;
			}
			free(top);
			top p;
			top->next=NULL;
		}
	}
}
int main()
{
	int data, op;
	while()
	{
		cout<<"1)push 2)pop 3)dis";
		cin>>op;
		
		switch(op)
		{
			case 1:
				cout<<"Enter Data";
				cin>>data;
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
}

