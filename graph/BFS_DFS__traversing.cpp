#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    void add_node(int u, int v, unordered_map<int, list<int>> &mp)
    {
        mp[u].push_back(v);
    }
};
void dfs_traversing(unordered_map<int, list<int>> &mp, int startnode)
{
    vector<bool> visited(mp.size(), false);
    visited[startnode] = true;
    cout << startnode << endl;
    for (auto i : mp[startnode])
    {
        if (!visited[i])
        {
            /* code */
            visited[i] = true;
            //i is basically u here
            dfs_traversing(mp, i);
        }
    }
}
void bfs_traversing(unordered_map<int, list<int>> &mp, int startnode)
{
    vector<bool> visited(mp.size(), false);
    visited[startnode] = true;
    queue<int> q;
    q.push(startnode);
    while (!q.empty())
    {
        /* code */
        int frontnode = q.front();
        q.pop();
        cout << frontnode << " " << endl;
        for (auto i : mp[frontnode])
        {
            if (!visited[i])
            {
                /* code */
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
    unordered_map<int, list<int>> mp;
    graph p;
    p.add_node(0, 1, mp);
    p.add_node(1, 3, mp);
    p.add_node(0, 2, mp);
    p.add_node(2, 4, mp);
    // bfs_traversing(mp,0);
    dfs_traversing(mp, 0);
}