#include<iostream>
using namespace std;
// this is the class of the linked list
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
// this function is used to insert values in ll from the head
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
// this function is used to print the entire linked list
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
}
// this function uses insertathead function to take values 
//and store it till user enters any specified number such as -1
node* takeinput()
{
	int d;
	cin>>d;
	node*head = NULL;
	while(d!=-1)
	{
		insertathead(head,d);
		cin>>d;
	}
	return head;
}
//the cin>> is overloaded to ease the process of giving input in the main function
istream& operator>>(istream &is,node*&head)
{
	head = takeinput();
	return is;
}
// this overloades the cout<< function to ease the print statement in the main function
ostream& operator<<(ostream &os,node*head)
{
	print(head);
	cout<<endl;
	return os;
}
// this function reverses the linked list and the value is passed by reference
// and also the reverse is performed by actually reversing the pointer as data swapping would get expensive
void reverse(node*&head)
{
	node*current = head;
	node*previous = NULL;
	node*n;
	while(current!=NULL)
	{
		n = current->next;
		current->next = previous;
		previous = current;
		current = n;
	}
	head = previous;
}
int main()
{
	node*head;
	node*head2;
	cin>>head>>head2;
	cout<<head<<head2;
	reverse(head);
	reverse(head2);
	cout<<head<<head2;
}