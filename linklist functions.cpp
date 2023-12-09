#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *h,*p,*q;
void createnode(int data)
{
	h=new node();
	h->data=data;
	h->next=NULL;
}

void insertlast(int data)
{
	if (h==NULL)
	{
		createnode(data);
	}
	else
	{
		p=h;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		q=new node();
		p->next=q;
		q->data=data;
		q->next=NULL;
	}
}

void deletelast()
{
	if (h==NULL)
	{
		cout<<"underflow";
	}
	else if (h->next==NULL)
	{
		delete h;
		h=NULL;
	}
	else
	{
		p=h;
		while(p->next->next!=NULL)
		{
			p=p->next;
		}
		q=p->next;
		delete q;
		p->next=NULL;
	}
}

void deletefirst()
{
	if (h==NULL)
	{
		cout<<"underflow";
	}
	else if (h->next==NULL)
	{
		delete h;
		h=NULL;
	}
	else
	{
		p=h;
		h=h->next;
		delete p;
		
	}
}


void insertfirst(int data)
{
	if (h==NULL)
	{
		createnode(data);
	}
	else
	{
		q=new node();
		q->next=h;
		q->data=data;
		h=q;
	}
}

void display()
{
	cout<<"Data elements : ";
    p=h;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
	int data,op;
	
	while(1)
	{
		cout<<"\n1)addLast\t2)addFirst\t3)deleteLast\t4)deleteFirst\t5)displayEnter choice : ";
		cin>>op;
		
		switch(op)
		{
			case 1:
				cout<<"Enter Data : ";
				cin>>data;
				insertlast(data);
				break;
			case 2:
				cout<<"Enter Data : ";
				cin>>data;
				insertfirst(data);
				break;	
			case 3:
				deletelast();
				break;
			case 4:
				deletefirst();
				break;		
			case 5:
				display();
				break;	
		}
	}
	
}
