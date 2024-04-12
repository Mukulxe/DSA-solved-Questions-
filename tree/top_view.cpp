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
Node *topvew(Node *root)
{
    unordered_map<int, vector<int>> mp;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontnode = temp.first;
        int dis = temp.second;
        if (mp.find(dis) == mp.end())
        {
            mp[dis].push_back(frontnode->data);
        }
        if (frontnode->left)
        {
            q.push(make_pair(frontnode->left, dis - 1));
        }
        if (frontnode->right)
        {
            q.push(make_pair(frontnode->right, dis + 1));
        }
    }
    for (auto i : mp)
    {
        cout << i.first << " -> ";
        for (auto value : i.second)
        {
            cout << value << " ";
        }
        cout << endl;
    }
}
int main()
{
    Node *root = buildtree();
    cout << endl;
    topvew(root);
}
