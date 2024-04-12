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
node *reverse(node *head)
{
    node *prev = nullptr;
    node *current = head;
    if (head == 0)
    {
        cout << "no node";
    }
    else
    {
        while (current != nullptr)
        {
            node *temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
    }
    return prev;
}
bool checkpallandrome(node *head)
{
    node *slow = head;
    node *fast = head->next;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    node *reverselinklisthead = reverse(slow->next);
    slow->next = reverselinklisthead;
    node *temp1 = head;
    node *temp2 = reverselinklisthead;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            // not a palindome
            return false;
        }
        else
        {
            // if data is equal, then aage badh jao
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
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
    int ans=checkpallandrome(head);
    if(ans==1)
    {
        cout<<"pallandrome present";
    }
    else
    {
        cout<<"no pallandrome";
    }
}