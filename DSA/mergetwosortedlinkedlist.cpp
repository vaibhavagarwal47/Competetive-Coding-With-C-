#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
	node(int d)
	{
		data = d;
		next=NULL;
	}
};
void insertattail(node*&head,int d)
{
	if(head==NULL)
	{
		head = new node(d);
		return;
	}
	node*tail = head;
	while(tail->next!=NULL)
	{
		tail=tail->next;
	}
	tail->next = new node(d);
	return;
}
node* mergesortedlist(node*a,node*b)
{
	if(a==NULL)
	{
		return b;
	}
	else if(b==NULL)
	{
		return a;
	}
	node*c;
	if(a->data < b->data)
	{
		c = a;
		c->next = mergesortedlist(a->next,b);
	}
	else
	{
		c=b;
		c->next = mergesortedlist(a,b->next);
	}
	return c;
}
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	return;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		node*head1=NULL;
		node*head2=NULL;
		int n,m;
		cin>>n;
		while(n--)
		{
			int d;
			cin>>d;
			insertattail(head1,d);
		}
		cin>>m;
		while(m--)
		{
			int x;
			cin>>x;
			insertattail(head2,x);
		}
		node*result = mergesortedlist(head1,head2);
        print(result);
	}
	return 0;
}