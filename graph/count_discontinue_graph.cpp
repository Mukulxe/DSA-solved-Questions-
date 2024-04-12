#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<int>> mp;
class graph
{
public:
    void add_node(unordered_map<int, list<int>> &mp, int u, int v)
    {
        mp[u].push_back(v);
    }
};
bool dfs_cylce_Detection(unordered_map<int, list<int>> &mp, int src, int parent, vector<bool> &visited)
{
    visited[src] = true;
    for (auto i : mp[src])
    {
        /* code */
        if (!visited[i])
        {
            /* code */
            int ans = dfs_cylce_Detection(mp, i, parent, visited);
            if (ans == true)
            {
                /* code */
                return true;
            }
        }
        else
        {
            if (visited[i] && i != parent)
            {
                /* code */
                return true;
            }
        }
    }
    return false;
}
int main()
{
    graph g;
    g.add_node(mp, 0, 1);
    g.add_node(mp, 1, 2);
    g.add_node(mp, 1, 3);
    g.add_node(mp, 3, 4);
    vector<bool> visited(mp.size(), false);
    int count = 0;
    for (int i = 0; i < mp.size(); i++)
    {
        /* code */
        bool ans = dfs_cylce_Detection(mp, 0, -1, visited);
        if (ans == true)
        {
            /* code */
            break;
        }
        else
        {
            count++;
        }
    }
    cout << "Number of disconnected components: " << count << endl;
} 