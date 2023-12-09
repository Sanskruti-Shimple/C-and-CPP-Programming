#include<iostream>
using namespace std;
struct node
{
int data;
node *prev, *next;
};
node *h,*p,*q;
void createnode(int data)
{
h=new node();
h->data=data;
h->prev=NULL;
h->next=NULL;
}
void addlast(int data)
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
}
q=new node();
q->next=NULL;
q->prev=p;
q->data=data;
p->next=q;
}

