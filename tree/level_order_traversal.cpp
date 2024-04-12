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
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();

        cout << temp->data << " ";
        q.pop();
        if (temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if (temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = buildtree();
    levelOrderTraversal(root);
}