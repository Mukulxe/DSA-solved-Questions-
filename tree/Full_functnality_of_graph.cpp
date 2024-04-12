#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildtree()
{
    int data;
    cout << "Enter data" << endl
         << "";
    cin >> data;
    // base condition
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    cout << "Enter data for left part of " << root->data << " node " << endl;
    root->left = buildtree();

    cout << "Enter data for right part of " << root->data << " node " << endl;
    root->right = buildtree();

    return root;
}
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();

        cout << temp->data << " ";
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
    cout<<endl;
}

void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<<root->data<<endl;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<endl;
}
void InorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InorderTraversal(root->left);
    cout<<root->data<<endl;
    InorderTraversal(root->right);
}
int main()
{
    Node *root = buildtree();
    // levelOrderTraversal(root);
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    InorderTraversal(root);
}