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
void deleteathead(node*&head)
{
    node*n = head;
    head = head->next;
    delete n;
}
void deleteattail(node*&head)
{
    node*temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    node*n = temp;
    temp->prev->next=NULL;
    temp = NULL;
    delete n;
    
}
void deleteatmiddle(node*&head,int k)
{
    if(k==1)
    {
        deleteathead(head);
    }
    else if(k==length(head))
    {
        deleteattail(head);
    }
    else
    {
        node* temp = head;
    int i=0;
    while(i<k-1)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    }
}
int main() {
    node*head=NULL;
    int n;
    cin>>n;
    buildlist(head,n);
    print(head);
    cout<<endl;
    deleteathead(head);
    print(head);
    cout<<endl;
    deleteattail(head);
    print(head);
    cout<<endl;
    int k;
    cin>>k;
    deleteatmiddle(head,k);
    print(head);
    return 0;
}