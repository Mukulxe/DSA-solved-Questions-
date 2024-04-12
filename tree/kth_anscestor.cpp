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
void kthtraversal(Node *root, int k, int n)
{
    vector<int> ans;
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (n == root->data)
        {
            return;
        }
        ans.push_back(root->data);
        kthtraversal(root->left, k, n);
        kthtraversal(root->right, k, n);
    }
    for (int i = ans.size(); i >= k; i--)
    {
        cout << "your ansecotr is:" << ans[i];
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