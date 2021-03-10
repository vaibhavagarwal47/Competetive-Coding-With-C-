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
void insertathead(node*&head,int d)
{
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
void insertattail(node*&head,node*&tail,int d)
{
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
	if(head==NULL || p==0)
	{
		insertathead(head,d);
	}
	else if(p==length(head))
	{
		insertattail(head,tail,d);
	}
	else
	{
	int len = length(head);
	node*curr = head;
	while(len<=p-1)
	{
		curr = curr->next;
		len--;
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
void deletefromtail(node*&head,node*&tail)
{
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
void deletefrommiddle(node*&head,node*&tail,int p)
{
	node*temp = head;
	if(p==0)
	{
		cout<<"list is empty";
		return;
	}
	else if(p==1)
	{
		deletefromhead(head);
		return;
	}
	else if(p==length(head))
	{
		deletefromtail(head,tail);
		return;
	}
	else
	{
		int len = length(head);
		while(len<=p-1)
		{
			temp = temp->next;
		}
		node*n = temp;
		temp = n->next;
		delete n;
	}
	return;
}
// this function is used to print the linked list
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
	insertatmiddle(head,tail,1,2);
	insertattail(head,tail,9);
	print(head);
	cout<<endl;
	deletefromhead(head);
	deletefromtail(head,tail);
	int p;
	cin>>p;
	deletefrommiddle(head,tail,p);
	print(head);
}