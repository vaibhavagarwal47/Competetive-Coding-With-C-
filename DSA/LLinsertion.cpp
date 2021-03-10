#include<bits/stdc++.h>
using namespace std;
class node	//node class for linked list
{
public:
	int data;
	node *next;
	node(int d)// node constructor to initialize it
	{
		data = d;
		next = NULL;
	}
};
void insertathead(node*&head,int d)//insert the element at the start of the linked list
{
	if(head == NULL)
	{
		head = new node(d);
		return;
	}
	node*n = new node(d);
	n->next = head;
	head = n;
}
void insertattail(node*&head,int d)//insert the element at the end of the linked list
{
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
}
int length(node*head)//find the length of the linkred list
{
	int count=0;
	while(head!=NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}

void insertatmiddle(node*&head,int d,int p)//insert the element anywhere in the linked list
{
	if(head==NULL or p==0)
	{
		head = new node(d);
		return;
	}
	else if(p==length(head))
	{
		insertattail(head,d);
	}
	else
	{
		int jump = (length(head));
		node*temp = head;
		while(jump<=p-1)
		{
			temp = temp->next;
			jump--;
		}
		node*n = new node(d);
		n->next = temp->next;
		temp->next= n;
	}
}
void print(node*head)//print the linked list
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
}
int main()
{
	node *head = NULL;
	int n,x;
	cout<<"Enter the elements you want to enetr in the linked list ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		insertathead(head,x);
	}
	print(head);
	insertatmiddle(head,10,3);
	insertattail(head,15);
	cout<<endl;
	print(head);
	return 0;
}