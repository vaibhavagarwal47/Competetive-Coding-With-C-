#include<iostream>
using namespace std;
// this is class of the node of the linked liat
class node
{
public:
	int data;
	node*next;
	node(int d)
	{
		data= d;
		next = NULL;
	}
};
// this function is used to insert the values in the linked list
void insert(node*&head,int d)
{
	// base case
	if(head==NULL)
	{
		head = new node(d);
		return;
	}
	node*tail = head;
	while(tail->next!=NULL)
	{
		tail = tail->next;
	}
	tail->next = new node(d);
	return;
}
// this function is used to take desired number of input from user
node* takeinput()
{
	cout<<"Enter the size of linked list: ";
	int n;
	cin>>n;
	node* head =NULL;
	while(n--)
	{
		int d;
		cin>>d;
		insert(head,d);
	}
	return head;
}
// this function overloads the cin>> operator to directly enter the value
istream& operator>>(istream &is,node*&head)
{
	head = takeinput();
	return is;
}
// this function is used to print the linked list
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
}
// this function is used to ease the output function of linkedlist by overloading << operator
ostream& operator<<(ostream &os,node*head)
{
	print(head);
	return os;
}
// this function is used to determine the midpoint of the linked list
node* midpoint(node*head)
{
	// base case
	if(head==NULL or head->next==NULL)
	{
		return head;
	}
	node* slow = head;
	node* fast = head->next;
	while(fast!=NULL || fast->next!=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
// this function is used to merge the list after comparing the data
node* merge(node*a, node*b)
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
	if(a->data <= b->data)
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
// this is the main function of merge sort
node* mergesort(node*head)
{
	// base case
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	node*mid = midpoint(head);
	node*a = head;
	node*b = mid->next;
	mid->next = NULL;
	a = mergesort(a);
	b = mergesort(b);
	node*temp = merge(a,b);
	return temp;
}
int main()
{
	node*head=NULL;
	cin>>head;
	cout<<head<<endl;
	head = mergesort(head);
	cout<<head;
}