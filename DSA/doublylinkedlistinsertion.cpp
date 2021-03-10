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
void insert(node*&head,int d);

int length(node*head)
{
    int count=0;
    while(head!=NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

void insertathead(node*&head,int d)
{
    if(head==NULL)
    {
        head =  new node(d);
    }
    else
    {
        node*n = new node(d);
        head->prev = n;
        n->next = head;
        head=n;
        return;
    }
}



void insertinmiddle(node*&head,int d,int k)
{
    if(k=1 or head==NULL)
    {
        insertathead(head,d);
        return;
    }
    else if(k==length(head))
    {
        insert(head,d);
        return;
    }
    else
    {
        node*temp=head;
        for(int i=1;i<k-1;i++)
        {
            temp = temp->next;
        }
        node*n = new node(d);
        n->prev = temp->prev;
        n->next = temp;
        temp->prev = n;
        temp = n;
        return;
    }
}
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
    cout<<endl;
    insertathead(head,11);
    print(head);
    cout<<endl;
    insertinmiddle(head,20,4);
    print(head);
    return 0;
}