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
node *tree(node *root, int data)
{
    if (root == NULL)
    {
        root = new node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = tree(root->left, data);
    }
    else
    {
        root->right = tree(root->right, data);
    }
    return root;
}
void takeinput(node *&root)
{
    int data;
    cout << "pls enter your data for node of tree" << endl;
    cin >> data;
    while (data != -1)
    {
        root = tree(root, data);
        cin >> data;
    }
}
int minval(node *root)
{
    node *temp = root;
    if (root == NULL)
    {
        /* code */
        return -1;
    }

    while (temp->left != NULL)
    {
        /* code */
        temp = temp->left;
    }
    return temp->data;
}
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
bool findtargetinbst(node *root, int target)
{
    bool rightans;
    bool leftans;
    if (root == NULL)
    {
        /* code */
        return 0;
    }
    if (root->data == target)
    {
        /* code */
        return true;
    }
    else
    {
        if (root->data > target)
        {
            rightans = findtargetinbst(root->right, target);
        }
        else
        {
            leftans = findtargetinbst(root->left, target);
        }
    }
    return rightans || leftans;
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    // initially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // A
        node *temp = q.front();
        // B
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // C
            cout << temp->data << " ";
            // D
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
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
            node *child = root->right;
            return child;
        }
        else if (root->right != NULL && root->left)
        {
            node *child = root->right;
            return child;
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

int main()
{
    int target=150;
    node *root = NULL;
    takeinput(root);
    levelOrderTraversal(root);
    node *updated_root=deletefunc(root,target);
    levelOrderTraversal(updated_root);
    // int answer = minval(root);
    // cout << "mimum value is:" << answer << endl;
    // int answer2 = maxval(root);
    // cout << "maximum value is:" << answer2 << endl;

}