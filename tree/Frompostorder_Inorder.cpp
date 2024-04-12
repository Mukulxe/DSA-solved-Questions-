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
Node *build_tree_from_preoder_to_inorder(int inorder[], int postorder[],int instart,int inend, int &postindex)
{
    int inindex;
    if (postindex <0 || inend<instart)
    {
        return NULL;
    }
     Node *root = new Node(postorder[postindex--]);
    for (int i = instart;i<=inend; i++)
    {
        if (root->data == inorder[i])
        {
            inindex = i;
            break;
        }
    }
    root->right=build_tree_from_preoder_to_inorder(inorder, postorder,inindex+1,inend,postindex);
    root->left=build_tree_from_preoder_to_inorder(inorder, postorder,instart,inindex-1,postindex);
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
        cout<<endl<<" ";
    }
}
int main()
{
    int inorder[] = {40, 20, 10, 50, 30, 60};
    int postorder[] = {40, 20, 50, 60, 30, 10};
    int n = sizeof(postorder) / sizeof(postorder[0]);
    int postindex = 5;
    Node *root=build_tree_from_preoder_to_inorder(inorder, postorder,0,5,postindex);
    levelOrderTraversal(root);
}
