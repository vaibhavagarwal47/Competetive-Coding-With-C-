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
		next = NULL;
	}
};
void insert(node*&head,node*&tail,int d)
{
	if(head==NULL)
	{
		node*n = new node(d);
        tail = head = n;
        return;
	}
	node*n = new node(d);
	tail->next = n;
	tail = n;
}
void print(node*head)
{
	while(head!=NULL)
	{
		cout<<head->data <<" ";
		head = head->next;
	}
}
void operator<<(ostream &os,node*head)
{
	print(head);
	return;
}
node* kthnode(node*head,int x)
{
	node*fast=head;
	node*slow=head;
	while(x--)
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
int main()
{
	node*head=NULL;
    node*tail=NULL;
    int n;
    cout<<"Enter the size of the linked list: ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        insert(head,tail,y);
    }
    cout<<head;
    cout<<endl;
	cout<<"Enter the node of which you want to see the data: ";
	int x;
	cin>>x;
	node*kth = kthnode(head,x);
    cout<<endl;
    cout<<"The data at kth node from last is: ";
	cout<<kth->data;
}