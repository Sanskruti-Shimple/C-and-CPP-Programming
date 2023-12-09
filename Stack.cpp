#include<iostream>
using namespace std;

int stk[max], top=-1;
void push(int data)
{
	if(top==1)
	{
		cout<<"overflow";
	}
	else 
	{
		top++;
		stk[top]=data;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Underflow";
	}
	else
	{
		top--;
	}
}
void display()
{
	int i=0;
	while(i<=top)
	{
		cout<<stk[i]<<"";
		i++;
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
