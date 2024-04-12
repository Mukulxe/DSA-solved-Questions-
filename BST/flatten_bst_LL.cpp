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
node *build_tree()
{

    int data;
    cout << "pls enter the data ";
    cin >> data;
    if (data == -1)
    {
        return;
    }

    node *root = new node(data);
    cout << "enter data for right root of" << root->data << " ";
    root->left = build_tree();
    return root;
}
void flatten_bst_ll(node *root)
{
    node *prev = root;
    node *curr = root;
    while (curr != NULL)
    {
        if (curr->left != NULL)
        {
            prev = curr->left;
            while (curr->right)
            {
                /* code */
                prev = prev->right;
            }
            prev->right = curr->right;
            prev->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}
int main()
{
    node *root = build_tree();
    flatten_bst_ll(root);
}