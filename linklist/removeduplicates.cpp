#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node()
    {
        this->data = 0;
        this->next;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
node *removeduplicate(node *head)
{
    node *current = head;
    node *forward=current;
    if (head == 0)
    {
        cout << "no node";
    }
    else
    {
        while (current != nullptr && forward!=nullptr)
        {
            if(current->data==forward->data)
            {
                current->next=forward->next->next;
            }
            else
            {
                forward=forward->next;
                current = current->next;
            }
        }
    }
    print(head);
}
int main()
{
    int data;
    node *head = nullptr;
    cout << "Fill Linklist" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> data;
        node *newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }
}