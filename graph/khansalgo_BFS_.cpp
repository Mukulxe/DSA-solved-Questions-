//this code is correct but here in vs it is not showing correct answer  check it on online c++ compiler
#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<int>> mp;
class graph
{
public:
    void add_node(int u, int v, unordered_map<int, list<int>> &mp)
    {
        mp[u].push_back(v);
    }
};
void topological_Sort()
{
    vector<int> Indegree(mp.size(), 0);
    queue<int> q;
    for (int i = 0; i < mp.size(); i++)
    {
        //here we are filling the indgree
        for (auto x : mp[i])
        {
            /* code */
            Indegree[x]++;
        }
    }
    for (int i = 0; i < mp.size(); i++)
    {
        //here we are pushing only those elemnt in queue whose indgree is 0
        if (Indegree[i] == 0)
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
        cout << u << endl;
        for (auto i : mp[u])
        {
            //here we are decreasing the indegree after removing its parent to which it is connected
            Indegree[i]--;
            //again follow same thing enter that one whose indgree is 0
            if (Indegree[i] == 0)
            {
                q.push(i);
            }
        }
    }
}
int main()
{
    graph p;
    p.add_node(0, 1, mp);
    p.add_node(0, 2, mp);
    p.add_node(2, 3, mp);
    p.add_node(2, 4, mp);
    topological_Sort();
}