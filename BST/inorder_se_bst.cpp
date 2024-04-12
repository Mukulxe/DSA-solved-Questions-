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
node *bstsearch(int inorder[], int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (e+ s) / 2;

    /* code */
    node *newnode = new node(mid);
    // if (mid > s)
    // {
       newnode->left= bstsearch(inorder, s, mid - 1);
    // }
    // if (mid < s)
    // {
        newnode->right=bstsearch(inorder, mid + 1, e);
    // }
    return newnode;
}
int main()
{
    int inorder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = 8;
    node *Root=bstsearch(inorder, s, e);
    levelOrderTraversal(Root);
}