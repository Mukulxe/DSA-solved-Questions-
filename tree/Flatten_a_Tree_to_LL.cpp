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
        cout << endl
             << " ";
    }
}
Node *buildtree()
{

    int data;
    cout << "Enter data" << endl
         << "";
    cin >> data;
    Node *root = new Node(data);
    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildtree();

    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildtree();
}
vector<int> fun(Node *root)
{
    Node *curr = root;
    vector<int> ans;
    while (curr != NULL)
    {
        if (curr->left != NULL)
        {
            ans.push_back(curr->data);
            curr = curr->right;
        }
        Node *leftchild = root->left;
        while (leftchild->right != NULL)
        {
            leftchild = leftchild->right;
        }
        Node *temp = curr;
        leftchild->right = curr->right;
        curr->right=NULL;
        curr = curr->left;
        temp->left = NULL;
    }
    return ans;
}