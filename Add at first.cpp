#include<iostream>
using namespace std;

struct node()
{
	int data;
	node *prev, *next;
};
void addf(int add)
{
	if(h==NULL)
	{
		createnode();
	}
	else
	{
		q=new node();
		q->data=data;
		q->next=h;
		h->prev=q;
	}
	q->prev=NULL;
	h=q;
}
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
