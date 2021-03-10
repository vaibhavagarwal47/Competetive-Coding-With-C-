#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};
void insertathead(node*&head,int d)
{
	if(head==NULL)
	{
		head = new node(d);
		return;
	}
	node *n = new node(d);
	n->next = head;
	head = n;
}

void deleteelement(node*&head,int x)
{
	node*n;
	node *prev;
	if(head==NULL)
	{
		cout<<"List is empty";
	}
	if(head->data==x)
	{
		prev = head;
		head = head->next;
		delete prev;
	}
	else
	{
		prev = head;
		while(prev->next!=NULL && prev->data!=x)
		{
			n = prev;
			prev = prev->next;
		}
		if(prev->data==x)
		{
			n->next = prev->next;
			delete prev;
		}
	}
}
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
}
int main()
{
	node*head = NULL;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		insertathead(head,x);
	}
	print(head);
	int d;
	cout<<"\nenter the element you want to delete ";
	cin>>d;
	deleteelement(head,d);
	print(head);
}