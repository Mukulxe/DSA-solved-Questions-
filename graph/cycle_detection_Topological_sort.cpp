#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<int>> mp;
vector<int> indegree;
queue<int> q;
class graph
{
public:
    void add_node(int u, int v, unordered_map<int, list<int>> &mp)
    {
        mp[u].push_back(v);
    }
};
void bfs_topolofical(int src)
{
    indegree.resize(mp.size(), 0);
    for (int i = 0; i < mp.size(); i++)
    {
        for (auto x : mp[i])
        {
            /* code */
            indegree[x]++;
        }
    }
    for (int i = 0; i < mp.size(); i++)
    {
        /* code */
        if (indegree[i] == 0)
        {
            /* code */
            q.push(i);
        }
    }
    while (!q.empty())
    {
        /* code */
        int u = q.front();
        q.pop();
        for (auto i : mp[u])
        {
            /* code */
            indegree[i]--;
            if (indegree[i] == 0)
            {
                /* code */
                q.push(i);
            }
        }
    }
    for (int i = 0; i < mp.size(); i++)
    {
        if (indegree[i] != 0)
        {
            cout << "Cycle is present\n";
            return;
        }
    }
    cout << "No cycle detected\n";
}
int main()
{
    graph g;
   g.add_node(0, 1, mp);
    g.add_node(0, 2, mp);
    g.add_node(1, 3, mp);
    g.add_node(2, 3, mp);
    g.add_node(2, 4, mp);
    g.add_node(3, 5, mp);
    g.add_node(4, 5, mp);
// g.add_node(0, 1,mp);
// g.add_node(1, 2,mp);
// g.add_node(2, 3,mp);
// g.add_node(3, 0,mp);
    
    // Call the function with starting node 0
    bfs_topolofical(0);
}