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
node *inorderpredessesor(node *root, int element)
{
    node *curr = root;
    node *pred;
    while (curr)
    {
        /* code */
        if (curr->data<element)
        {
            /* code */
            pred = curr;
            curr = curr->right;
        }
        else
        {
            curr = curr->left;
        }
    }
    return pred;
}
void print(node *root)
{
    cout<<"your answer is:"<<root->data;
}
int main()
{
    node *prev=NULL;
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
    // sixth->left = seventh;
    // sixth->right = eight;

    node *root1=inorderpredessesor(root,15);
    print(root1);
}