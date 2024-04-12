#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *createlinklist(node *root, node *&current)
{
    if (root == NULL)
        return NULL;

    node *head = createlinklist(root->left, current);
     if (current == NULL) {
        head = root;
    }
    else
    {
        current->right = root;
    }
    current = root;

    createlinklist(root->right, current);

    return head;
}
node *print(node *root)
{
    while (root!= NULL)
    {
        /* code */
        cout << root->data<<" ";
        root = root->right;
    }
    cout<<endl;
}
int main()
{
    node *curr=NULL;
    node *root = new node(15);
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(8);
    node *fourth = new node(12);
    node *fifth = new node(16);
    node *sixth = new node(25);
    // node *seventh = new node(65);
    // node *eight = new node(80);

    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth;
    second->left = fifth;
    second->right = sixth;

    node *root1 = createlinklist(root,curr);
    print(root1);
}