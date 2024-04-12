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
int maxval(node *root)
{
    node *temp = root;
    if (root == NULL)
    {
        /* code */
        return -1;
    }

    while (temp->right != NULL)
    {
        /* code */
        temp = temp->right;
    }
    return temp->data;
}
node *deletefunc(node *root, int target)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (target == root->data)
    {
        /* code */
        // step1->
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        else if (root->right != NULL && root->left)
        {
            node *current = root->right;
            return current;
        }
        else if (root->right != NULL && root->left)
        {
            node *current = root->right;
            return current;
        }
        else
        {
            int maxno = maxval(root->left);
            root->data = maxno;
            root->left = deletefunc(root, maxno);
            return root;
        }
    }
    else if (root->data > target)
    {
        /* code */
        root->left = deletefunc(root, target);
    }
    else if (root->data < target)
    {
        root->right = deletefunc(root, target);
    }
    return root;
}
