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
void right_view(Node *root, vector<int> &ans, int level)
{
    //     if (root == NULL)
    //     {
    //         return;
    //     }
    //     if (level == ans.size())
    //     {
    //         ans.push_back(root->data);
    //     }
    //     right_view(root->right, ans, level + 1);
    //     right_view(root->left, ans, level + 1);


    //Mukul's method--------------------------------------------------------------------------------------------
    map<int, int> mp;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        if (root == NULL)
        {
            return;
        }
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontnode = temp.first;
        int dis = temp.second;
        if (mp.find(dis) == mp.end())
        {
            mp[dis] = frontnode->data;
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, dis + 1));
        }
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, dis + 1));
        }
    }
    for (auto i : mp)
    {
        cout << i.first << " -> " << i.second << endl;
    }
}
int main()
{
    vector<int> ans;
    int level = 0;
    Node *root = buildtree();
    cout << endl;
    right_view(root, ans, level);
    for (auto i : ans)
    {
        cout << i << endl;
    }
}
