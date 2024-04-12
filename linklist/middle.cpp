#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node()
    {
        this->data;
        this->next;
    }
    node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
};
node * middlefinf(node *head)
{
    node *slow=head;
    node *fast=head;
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
       {
        fast=fast->next;
        slow=slow->next;
       }
    }
    return slow;
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
    node *temp=middlefinf(head);
    cout<<"middle element is:"<<temp->data;
}