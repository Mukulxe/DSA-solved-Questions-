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
struct Result
{
    node *head1;
    node *Head2;
};
node *reverse(node *head)
{
    node *current = head;
    node *prev = nullptr;
    node *temp;
    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}
void print(node *head)
{
    node *temp=head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
node * sumfun(node *headd1, node *headd2)
{
    int sum = 0;
    int carry = 0;
    int digit = 0;
    node *newnodehead = NULL;
    node *ansTail = NULL;
    node *Head1 = reverse(headd1);
    node *Head2 = reverse(headd2);
    while (Head1 != NULL && Head2 != NULL)
    {
        sum = carry + Head1->data + Head2->data;
        digit = sum % 10;
        carry = digit / 10;
        node *newnode = new node(digit);
        if (newnodehead == NULL)
        {
            newnodehead = newnode;
            ansTail = newnode;
        }
        else
        {
            ansTail->next = newnode;
            ansTail=newnode;
        }
        Head1 = Head1->next;
        Head2 = Head2->next;
    }
    while (Head1 != NULL)
    {
        sum = carry + Head1->data + Head2->data;
        digit = sum % 10;
        carry = digit / 10;
        node *newnode = new node(digit);
        ansTail->next = newnode;
        ansTail=newnode;
        Head1 = Head1->next;
    }
    while (Head2 != NULL)
    {
        sum = carry + Head1->data + Head2->data;
        digit = sum % 10;
        carry = digit / 10;
        node *newnode = new node(digit);
        ansTail->next = newnode;
        ansTail=newnode;
        Head2 = Head2->next;
    }
    if (carry > 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        node *newNode = new node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    node *newlisthead=reverse(newnodehead);
    print(newlisthead);
}
int main()
{
    int data;
    node *head1 = nullptr;
    node *Head2 = nullptr;
    cout << "Fill first Linklist" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> data;
        node *newnode = new node(data);
        newnode->next = head1;
        head1 = newnode;
    }
    cout << endl;
    cout << "fill second linklist" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> data;
        node *newnode = new node(data);
        newnode->next = Head2;
        Head2 = newnode;
    }
}