//this code is correct but here in vs it is not showing correct answer  check it on online c++ compiler
#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<int>> mp;
stack<int> st;
class graph
{
public:
    void add_node(int u, int v, unordered_map<int, list<int>> &mp)
    {
        mp[u].push_back(v);
    }
};
void Dfs_topological(unordered_map<int, list<int>> &mp, int src,vector<int> &visited)
{
    for (auto i : mp[src])
    {
        if (!visited[i])
        {
            visited[i] = true;
            Dfs_topological(mp, i,visited);
        }
    }
    st.push(src);
}
void print(stack<int> &st)
{

    while (!st.empty())
    {
        /* code */
        cout << st.top() << endl;
        st.pop();
    }
}
int main()
{
    graph p;
    p.add_node(0, 1, mp);
    p.add_node(0, 2, mp);
    p.add_node(1, 2, mp);
    p.add_node(2, 3, mp);
    
    vector<int> visited(mp.size(), false);
    visited[0] = true;
    Dfs_topological(mp, 0,visited);
    print(st);
}