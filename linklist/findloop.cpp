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
        this->data = data;
        this->next = nullptr;
    }
};
bool findloop(node *head)
{
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            return true;
        }
    }
      return false;
}
int main()
{
    // int data;
    // node*head=nullptr;
    // cout<<"Fill Linklist"<<endl;
    // for ( int i = 0; i < 5; i++)
    // {
    //     cin>>data;
    //     node *newnode=new node(data);
    //     newnode->next=head;
    //     head=newnode;
    // }
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(60);
    node *seventh = new node(70);
    node *eighth = new node(80);
    node *ninth = new node(90);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fourth;
    int ans = findloop(head);
    if (ans == 1)
    {
        cout << "loop present";
    }
    else
    {
        cout << "no loop present";
    }
}