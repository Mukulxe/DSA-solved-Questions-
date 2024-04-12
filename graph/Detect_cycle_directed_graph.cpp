#include <bits/stdc++.h>
using namespace std;
// we will do it dfs only
unordered_map<int, list<int>> mp;
vector<bool> visited(mp.size(), false);
class graph
{
public:
    void add_node(unordered_map<int, list<int>> &mp, int u, int v)
    {
        mp[u].push_back(v);
       
    }
};
bool dfs_cylce_detection(unordered_map<int, list<int>> &mp, int src, vector<bool> &visited, vector<bool> &dfscalls)
{
    visited[src] = true;
    dfscalls[src] = true;
    for (auto i : mp[src])
    {
        /* code */
        if (!visited[i])
        {
            /* code */
            bool ans = dfs_cylce_detection(mp, i, visited, dfscalls);
            if (ans==true)
            {
                /* code */
                return true;
            }
        }

        if (dfscalls[i] == true && visited[i] == true)
        {
            /* code */
            return true;
        }

        dfscalls[i] = false;
    }
    return false;
}
int main()
{
    graph g;
    bool ans;
    g.add_node(mp, 0, 1);
    g.add_node(mp, 1, 2);
    g.add_node(mp, 2, 3);
    g.add_node(mp, 3, 4);
    g.add_node(mp, 4, 1);
    vector<bool> dfscalls(mp.size(),false);
    for (int i = 0; i < mp.size(); i++)
    {
        /* code */
        if (!visited[i])
        {
            /* code */
            ans = dfs_cylce_detection(mp, 0, visited, dfscalls);
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
}