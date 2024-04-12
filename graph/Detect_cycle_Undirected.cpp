#include <bits/stdc++.h>
using namespace std;
// this code is for unidirected
unordered_map<int, list<int>> mp;
vector<bool> visited(mp.size(), false);
class graph
{
public:
    void add_node(int u, int v, unordered_map<int, list<int>> &mp, int direction)
    {
        mp[u].push_back(v);
        if (direction == 1)
        {
            /* code */
            mp[v].push_back(u);
        }
    }
};
bool dfs_cycle_detection(int src, unordered_map<int, list<int>> &mp, int parent)
{
    visited[src] = true;
    for (auto nbr : mp[src])
    {
        if (!visited[nbr])
        {
            bool ans = dfs_cycle_detection(nbr, mp, src);
            if (ans == 1)
            {
                return true;
            }
        }
        else
        {
            if (visited[nbr] && nbr != parent)
            {
                return true;
            }
        }
    }
    return false;
}
bool bfs_Cycle_detection(unordered_map<int, list<int>> &mp, int u)
{
    vector<int> parent(mp.size(), -1);
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        /* code */
        int frontnode = q.front();
        q.pop();
        // cout << frontnode << " ";
        for (auto i : mp[frontnode])
        {
            /* code */
            if (!visited[i])
            {
                /* code */
                visited[i] = true;
                q.push(i);
                parent[i] = frontnode;
            }
            else
            {
                // it means already visited
                if (i != parent[frontnode])
                {
                    /* code */
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    graph p;
    bool ans;
    // p.add_node(0, 1, mp, 1);
    // p.add_node(1, 2, mp, 1);
    // p.add_node(2, 0, mp, 1); // Creating a cycle
    // p.add_node(1, 3, mp, 1);
    // p.add_node(3, 4, mp, 1);

    // will not Create a cycle
    p.add_node(0, 1, mp, 1);
    p.add_node(1, 2, mp, 1);
    p.add_node(1, 3, mp, 1);
    p.add_node(3, 4, mp, 1);
    for (int i = 0; i < mp.size(); i++)
    {
        if (!visited[i])
        {
             ans = dfs_cycle_detection(i, mp, -1);
            if (ans == true)
            {
                /* code */
                break;
            }
        }
    }
    if (ans == 1)
    {
        /* code */
        cout << "cycle is present";
    }
    else
    {
        cout << "cycle not present";
    }
    // ans = bfs_Cycle_detection(mp, 0);
}