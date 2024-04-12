#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
    node()
    {
        this->data=0;
        this->next;
        this->prev;
    }
    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
// node *insertathead(node *head,int data)
// {
//     node *newnode=new node(data);
//     newnode->next=head;
//     head=newnode;
//     node *temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
node *doubly_insertathead(node *head,int data)
{
    node *newnode=new node(data);
    newnode->next=head;
    newnode->prev=nullptr;
    head=newnode;
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// node *doubly_insertatpos(node *head,int data,int pos)
// {
//     node *newnode=new node(data);
//     newnode->next=head;
//     newnode->prev=nullptr;
//     head=newnode;
//     node *temp=head;
//     node *temp3=head;
//     node *temp2=head;
//     int i=1;
//     while (i<pos)
//     {
//         temp=temp->next;
//     }
//    newnode->next = temp->next;
//     newnode->prev = temp;
//     temp->prev->next = newnode;
//       temp->prev = newnode;
//     cout<<endl;
//      while (temp3!=NULL)
//     {
//         cout<<temp3->data<<" ";
//         temp3=temp3->next;
//     }
//     cout<<endl;
// }
node *doubly_insertatpos(node *head, int data, int pos)
{
    node *newnode = new node(data);
    node *temp = head;
    int i = 1;

    while (i < pos && temp != nullptr)
    {
        temp = temp->next;
        i++;
    }

    if (temp == nullptr)
    {
        cout << "Invalid position." << endl;
        return head;
    }

    newnode->next = temp;
    newnode->prev = temp->prev;

    // if (temp->prev != nullptr)
    // {
        temp->prev->next = newnode;
    // }
    temp->prev = newnode;

    // Print the updated list
    node *temp3 = head;
    cout << "Updated List: " << endl;
    while (temp3 != nullptr)
    {
        cout << temp3->data << " ";
        temp3 = temp3->next;
    }
    cout << endl;

    return head;
}

node* printfun(node *head,node *fifth)
{
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"reverse printed"<<endl;
    temp=fifth;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int len(node *head)
{
    int count=0;
    node *temp=head;
    while (temp!=NULL)
    {
        temp=temp->next;
        count++; 
    }
    return count;
}
int main()
{
    node *head=new node(10);
    node *first=new node(20);
    node *second=new node(30);
    node *third=new node(40);
    node *fourth=new node(50);
    node *fifth=new node(60);
    //linking of next pointer
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    //limking prev pointer
    head->prev=nullptr;
    first->prev=head;
    second->prev=first;
    third->prev=second;
    fourth->prev=third;
    fifth->prev=fourth;
    printfun(head,fifth);
    int count =len(head);
    cout<<"length is:"<<count<<endl;
    // cout<<"inserting at head";
    // cout<<endl;
    // insertathead(head,155);
    cout<<endl;
    cout<<"insert at head of doubly linklist";
    cout<<endl;
    doubly_insertathead(head,233);
    cout<<endl;
    doubly_insertatpos(head,900,5);
}