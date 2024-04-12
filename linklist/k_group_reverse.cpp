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
int getlen(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
node *reverseknode(node *head, int k)
{
    node *forward;
    node *current=head;
    node *prev = NULL;
    if (head == 0)
    {
        cout << "no node";
    }
    int len = getlen(head);
    if (k > len)
    {
        cout << "out of bound";
    }
    while (len < k)
    {
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
        len--;
    }
    if (forward != NULL)
    {
        // we still have nodes left to reverse
        node *recursionKaAns = reverseknode(forward, k);
        head->next = recursionKaAns;
    }
    return prev;
}
int main()
{
    int data;
    int k;
    node *head = nullptr;
    cout << "Fill Linklist" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> data;
        node *newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }
    cout<<"enter the k number:";
    cin>>k;
    print(head);
    cout<<"reversed newlink list";
    node *newhead=reverseknode(head,k);
    print(newhead);
}