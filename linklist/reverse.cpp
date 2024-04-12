#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node * next;

    node ()
    {
        this->data=0;
        this->next;
    }
    node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(node* head)
{
    node *temp;
    temp=head;
    while (temp!=NULL)
    {
        cout<<endl;
        cout<<temp->data<<endl;
        temp=temp->next;
    } 
}
node* reverse(node *current,node *prev)
{
    //base case
    if (current==NULL)
    {
        return prev;
    }
    
    node *temp;
    node*forward;
    if(current==0)
    {
        cout<<"sorry no node";
    }
    else
    {
        temp->next=current->next;
        current->next=prev;
        prev=current;
        current=temp;
        reverse(current,temp);
    }
}
int main()
{
    int data;
    node*head=nullptr;
    cout<<"Fill Linklist"<<endl;
    for ( int i = 0; i < 5; i++)
    {
        cin>>data;
        node *newnode=new node(data);
        newnode->next=head;
        head=newnode;
    }
    node* prev = NULL;
    node* curr = head;
    reverse(prev,curr);
    cout<<"reversed linklist";
    print(head);
}