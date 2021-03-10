#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node(int d)
	{
		data=d;
		next=NULL;
	}
};
void insert(node*&head,int d)
{
	
	if(head==NULL)
	{
		head = new node(d);
		head->next = head;
		return;
	}
    node*temp = head;
    node*n = new node(d);
	temp->next = n;
    temp = temp->next;
	n->next = head;
    
	return;
}
void buildlist(node*&head,int n)
{
	int d;
	while(n--)
	{
		cin>>d;
		insert(head,d);
	}
	return;
}
void printlist(node*head)
{
	node*temp = head;
    while(temp->next!=head)
	{
		cout<<head->data<<" ";
		temp = temp->next;
	}
    cout<<temp->data;
	return;
}
int main()
{
	node*head=NULL;
	int n;
	cin>>n;
	buildlist(head,n);
	printlist(head);
	return 0;
}