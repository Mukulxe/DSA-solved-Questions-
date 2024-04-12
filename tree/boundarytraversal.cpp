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

    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildtree();

    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildtree();
    return root;
}
// will first cover the left view
void printleftview(Node *root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        /* code */
        return;
    }
    cout << root->data << endl;
    if (root->left)
    {
        printleftview(root->left);
    }
    else
    {
        printleftview(root->right);
    }
}
void printleafview(Node *root)
{
    if(root==NULL)
    {
        return; 
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << endl;
    }
    printleafview(root->left);
    printleafview(root->right);
}
void printrightview(Node *root)
{
    if (root == NULL)
    {
        /* code */
        return;
    }
    if (root->right == NULL && root->left == NULL)
    {
        /* code */
        return;
    }
    if (root->left)
    {
        printleftview(root->left);
    }
    else
    {
        printleftview(root->right);
    }
    cout << root->data << endl;
}
int main()
{
    vector<int> ans;
    int level = 0;
    Node *root = buildtree();
    cout << endl;
    // right_view(root, ans, level);
    for (auto i : ans)
    {
        cout << i << endl;
    }
    printleftview(root);
    printleafview(root);
    printrightview(root);
} 