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
        this->left= NULL;
        this->right = NULL;
    }
};
node *inordersucessor(node *root,int element)
{
    node*curr=root;
    node *successor;
    while (curr)
    {
        /* code */
         if (curr->data>element)
        {
            /* code */
            successor = curr;
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
    return successor ;
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
    root->left = first;
    root->right = second;
    first->left = third;
    first->right = fourth;
    second->left = fifth;
    second->right = sixth;
    node *root1=inordersucessor(root,15);
    print(root1);
}