#include<iostream>
using namespace std;
// this is the class of the node of linked list
class node
{
    public:
	int data;
	node*next;
	node(int d)
	{
		data=d;
		next = NULL;
	}
};
// this function is used to insert element at head
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
// this function is used to insert element at tail
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
// this function is used to print the linked list
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
}
// this is used to find the kthnode of the linkedlist
node* kthnode(node*head,int k)
{
	node*fast = head->next;
    node*slow = head;
	for(int i=0;i<k;i++)
    {
        fast = fast->next;
    }
    while(fast!=NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
// this is used to append the element after 
// kth node to the start
node* kthnodeappend(node*&head,int k,int n)
{
    node*slow = head;
    int len = n-k-1;
	for(int i=0;i<len;i++)
    {
        slow = slow->next;
    }
    node*temp=slow;
    node*nt = temp->next;
    node*x = nt;
    temp->next=NULL;
    slow->next=NULL;
    while(nt->next!=NULL)
    {
    	nt = nt->next;
    }
    nt->next = head;
    return x;
}
int main()
{
	int n,d;
	cin>>n;
	node*head=NULL;
	node*tail=NULL;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		insertattail(head,tail,d);
	}
	int k;
	cin>>k;
	head = kthnodeappend(head,k,n);
	print(head);
}