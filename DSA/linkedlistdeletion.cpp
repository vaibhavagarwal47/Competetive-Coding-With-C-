#include<iostream>
using namespace std;
//this is the class of the node of linked list
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
// this function is used to insert values at the head of the linked list
// here the parameter is passed by reference because we want to insert in the linked list permanently
void insertathead(node*&head,int d)
{
	// base case
	if(head ==NULL)
	{
		head = new node(d);
		return;
	}
	node*n = new node(d);
	n->next = head;
	head = n;
}
// this function is used to insert the values from the end of the linked list
// parameters are passed by reference
void insertattail(node*&head,node*&tail,int d)
{
	// base case
	if(head==NULL)
	{
		insertathead(head,d);
		return;
	}
	tail = head;
	while(tail->next!=NULL)
	{
		tail = tail->next;
	}
	tail->next = new node(d);
}
// this function is used to calculate the length of the linked list
int length(node*head)
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head = head->next;
	}
	return count;	
}
// this function is used to insert any data in the middle of the linked list
void insertatmiddle(node*&head,node*&tail,int d,int p)
{
	// base case
	if(head==NULL || p==0)
	{
		insertathead(head,d);
	}
	// base case
	else if(p>length(head))
	{
		insertattail(head,tail,d);
	}
	else
	{
	int jump=1;
	node*curr = head;
	while(jump<=p-1)
	{
		curr = curr->next;
		jump++;
	}
	node*n = new node(d);
	n->next = curr->next;
	curr->next= n;
	}
	return;
}
// this function is used to delete any element from the linked list
void deletefromhead(node*&head)
{
	// base case
	if(head==NULL)
	{
		cout<<"list is empty";
		return;
	}
	node*n = head;
	head = head->next;
	delete n;
}
// this function is used to delete element from the tail of the ll
void deletefromtail(node*head,node*tail)
{
	// base case
	node*temp = head;
	if(temp==NULL)
	{
		cout<<"list is empty";
		return;
	}
	else if(temp->next==NULL)
	{
		delete temp;
		temp = NULL;
	}
	else
	{
		while(temp->next->next!=NULL)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
}
// this function is used to delete any element from a given position
void deletefrommiddle(node*head,node*tail,int p)
{
	// base case
	if(p==0)
	{
		cout<<"list is empty";
		return;
	}
	// base case
	else if(p==1)
	{
		deletefromhead(head);
		return;
	}
	// base case
	else if(p>length(head))
	{
		deletefromtail(head,tail);
	}
	else
	{
		int jump=1;
		node* temp = head;
		while(jump<=p-1)
		{
			temp = temp->next;
			jump++;
		}
		node*del = temp->next->next;
		delete temp->next;
		temp->next = del;
	}
	return;
}
// this function is used to print the linked list
// no need to pass parameters by refernce as this will lose this address of previous nodes
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	return;
}
int main()
{
	node*head = NULL;
	node*tail = NULL;
	// this enters data int the ll
	int d;
	cin>>d;
	insertathead(head,d);
	insertattail(head,tail,d);
	insertattail(head,tail,3);
	insertattail(head,tail,9);
	// here 1 is the element to be inserted and 2 is the position where it is to be inserted
	insertatmiddle(head,tail,1,2);
	print(head);
	cout<<endl;
	deletefromhead(head);
	deletefromtail(head,tail);
	int p;
	cin>>p;
	deletefrommiddle(head,tail,p);
	print(head);
}