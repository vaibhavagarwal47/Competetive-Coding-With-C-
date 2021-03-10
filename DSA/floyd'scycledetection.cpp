#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data = d;
        next=NULL;
    }
};
void insert(node*&head,int d)
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
bool loop(node*head)
{
    int count;
    if(head==NULL or head->next==NULL)
    {
        return false;
    }
    node*fast=head;
    node*slow=head;
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
int main() {
    node*head=NULL;
    int n;
    n=7;
    buildlist(head,n);
    head->next->next->next->next->next->next->next=head;
    if(loop(head))
    {
        cout<<"Loop Found";
    }
    else
    {
        cout<<"No Loop Found";
    }
    return 0;
}