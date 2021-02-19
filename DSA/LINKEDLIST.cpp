#include<iostream>
using namespace std;
//print the linked list of 4 numbers
/*
class node{
public:
	int num;
	node *next;
};

void printlist(node *n)
{
	while(n!=NULL)
	{
		cout<<n->num<<" ";
		n = n->next;
	}
}

int main()
{
	node *start=NULL;
	node *first = NULL;
	node *second = NULL;
	node *third = NULL;

	start = new node();
	first = new node();
	second = new node();
	third = new node();

	start->num = 1;
	start->next = first;
	first->num = 4;
	first->next = second;
	second->num = 2;
	second->next = third;
	third->num = 8;
	third->next = NULL;
	printlist(start);
	return 0;
}
*/

class node
{
public:
	double data;
	node *next;
};
node *start;
void printlist(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n = n->next;
	}
}

int main()
{
	node *head;
	head = new node();
	head->data = 1;
	head->next = NULL;
	if(head==NULL)
	{
		cout<<"no memory allocated";
	}
	else
	{
		head->next = start;
		start = head;
	}
}