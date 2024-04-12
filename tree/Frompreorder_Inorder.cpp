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
Node *build_tree_from_preoder_to_inorder(int inorder[],int preorder[],int instart,int inend,int n,int &preindex)
{
    int inindex;
    if(preindex>n || instart>inend)
    {
        return NULL;
    }
    Node *root=new Node(preorder[preindex++]);
    for (int i = instart; i<=inend; i++)
    {
        if (root->data==inorder[i])
        {
            inindex=i;
            break;
        }
    }
    root->left=build_tree_from_preoder_to_inorder(inorder,preorder,instart,inindex-1,n,preindex);
    root->right=build_tree_from_preoder_to_inorder(inorder,preorder,inindex+1,inend,n,preindex);
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
        int inorder[] = {40,20,50,10,60,30,70};
        int preorder[] = {10,20,40,50,30,60,70};
        int instart=0;
        int preindex=0;
        int inend=sizeof(inorder) / sizeof(inorder[0]);
        int n=sizeof(inorder) / sizeof(inorder[0]);
        Node *root=build_tree_from_preoder_to_inorder(inorder,preorder,0,6,7,preindex);
        levelOrderTraversal(root);
}