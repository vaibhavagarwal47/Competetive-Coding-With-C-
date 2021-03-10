#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int d)
    {
        data = d;
        next=NULL;
        prev=NULL;
    }
};
void insert(node*&head,int d)
{   node*tail = head;
    node*n = head;
    if(head==NULL)
    {
        head = new node(d);
        return;
    }
    n = new node(d);
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }
    tail->next = n;
    n->prev=tail;
    return;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    return;
}
void buildlist(node*&head,int n)
{
    int d;
    while(n--)
    {
        cin>>d;
        insert(head,d);
    }
    return;
}
int main() {
    node*head=NULL;
    int n;
    n=7;
    buildlist(head,n);
    print(head);
    return 0;
}