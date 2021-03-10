#include<iostream>
using namespace std;
// This is class for the linked list
class node
{
public:
	int data;
	node*next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};
// this function is used to insert element from the head
void insertathead(node*&head,int d)
{
	if(head==NULL)
	{
		head = new node(d);
		return;
	}
	node*n = new node(d);
	n->next = head;
	head = n;
}
// this function is used to print the array
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
}
// this is used to take input continously till any invalid number is encountered
node* takeinput()
{
	int d;
	cin>>d;
	node*head=NULL;
	while(d!=-1)
	{
		insertathead(head,d);
		cin>>d;
	}
	return head;
}
// this is used to find the middle point of the linked list
node* middlepoint(node*head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}
	node*fast=head->next;
	node*small=head;
	while(fast!=NULL or fast->next!=NULL)
	{
		fast = fast->next->next;
		small = small->next;
	}
	return small;
}
// this function overloads the >> operator to directly input the linked list
istream& operator>>(istream &is,node*&head)
{
	head = takeinput();
	return is;
}
// this function overloads the << operator to directly print the linked list in the main program
ostream& operator<<(ostream &os,node*head)
{
	print(head);
	cout<<endl;
	return os;
}
// this function is used for merging the linkedlist
node* merge(node*a,node*b)
{
	if(a==NULL)
	{
		return b;
	}
	if(b==NULL)
	{
		return a;
	}
	node*c;
	if(a->data < b->data)
	{
		c = a;
		c->next = merge(a->next,b);
	}
	else
	{
		c = b;
		c->next = merge(a,b->next);
	}
	return c;
}
// this function is used to sort the linked list by calling the merge function
node* mergesort(node*head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}
	node* mid = middlepoint(head);
	node*a = head;
	node*b = mid->next;
	mid->next = NULL;
	a = mergesort(a);
	b = mergesort(b);
	node *c = merge(a,b);
	return c;
}
int main()
{
	node*head;
	cin>>head;
	cout<<head;
	head = mergesort(head);
	cout<<head;
}