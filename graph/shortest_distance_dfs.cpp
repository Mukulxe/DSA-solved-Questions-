#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<pair<int, int>>> adjL;
stack<int> st;
class graph
{
public:
    void addEdge(int startnode, int endnode, int direction, int weight)
    {
        // for 1->unidirected graph
        // for 0->directed graph
        adjL[startnode].push_back({endnode, weight});
        if (direction == 0)
        {
            /* code */
            adjL[endnode].push_back({startnode, weight});
        }
    }
};
void Dfs_topological(int src, vector<bool>& visited) {
    visited[src]=true;
    for (auto nbr : adjL[src]) {
        if (!visited[nbr.first]) {
            visited[nbr.first] = true;
            Dfs_topological(nbr.first, visited);
        }
    }
    st.push(src);
}
void short_path(stack<int> st, unordered_map<int, list<pair<int, int>>> adjL, vector<bool> &visited, vector<int> dis)
{
    int topelement = st.top();
    st.pop();
    dis[topelement] = 0;
    for (auto nbr : adjL[0])
    {
        if (dis[0] + nbr.second < dis[nbr.first])
        {
            dis[nbr.first] = dis[0] + nbr.second;
        }
    }
    while (!st.empty())
    {
        /* code */
        int topelement = st.top();
        st.pop();
        
        for (auto nbr : adjL[topelement])
        {
            /* code */
            if (dis[topelement] != INT_MAX)
            {
                if (dis[topelement] + nbr.second < dis[nbr.first])
                {
                    /* code */
                    dis[nbr.first] = dis[topelement] + nbr.second;
                }
            }
        }
    }
    cout << "Printing Ans: " << endl;
    for (int i = 0; i < dis.size(); i++)
    {
        cout << i << "-> " << dis[i] << endl;
    }
}
int main()
{
    graph g;
    g.addEdge(6, 3, 2, 1);
    g.addEdge(6, 1, 14, 1);
    g.addEdge(3, 1, 9, 1);
    g.addEdge(3, 2, 10, 1);
    g.addEdge(1, 2, 7, 1);
    g.addEdge(2, 4, 15, 1);
    g.addEdge(4, 3, 11, 1);

    g.addEdge(6, 5, 9, 1);
    g.addEdge(4, 5, 6, 1);
    vector<bool> visited(adjL.size(), false);
    vector<int> dis(adjL.size(), INT_MAX);
    Dfs_topological(0,visited);
    short_path(st,adjL,visited,dis);
}