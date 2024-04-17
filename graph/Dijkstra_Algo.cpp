#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<pair<int, int>>> adjlist;
class graph
{
public:
    void addnode(int u, int v, int wt, bool direction)
    {
        adjlist[u].push_back({v, wt});
        if (direction == 1)
        {
            /* code */
            adjlist[v].push_back({u, wt});
        }
    }
};
void dijkstra(int src, int n)
{
    set<pair<int, int>> st;
    vector<int> dis(n, INT_MAX);
    st.insert({src, 0});
    dis[src] = 0;
    while (!st.empty())
    {
        /* code */
        auto topelement = *(st.begin());
        int node = topelement.first;
        int distance_from_node = topelement.second;

        st.erase(st.begin());
        for (auto nbr : adjlist[node])
        {
            /* code */
            if (nbr.second + distance_from_node < dis[nbr.first])
            {
                // auto result = st.find(make_pair(nbr.first, dis[nbr.first]));
                // // if found, then remove
                // if (result != st.end())
                // {
                //     st.erase(result);
                // }
                // here we are upadting distance vector
                dis[nbr.first] = nbr.second + distance_from_node;
                // here we are inserting the the latest updated pair in set
                st.insert({nbr.first, dis[nbr.first]});
            }
        }
    }
    cout << "printing ans:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dis[i] << ", ";
    }
    cout << endl;
}
int main()
{
    graph g;
    g.addnode(6, 3, 2, 1);
    g.addnode(6, 1, 14, 1);
    g.addnode(3, 1, 9, 1);
    g.addnode(3, 2, 10, 1);
    g.addnode(1, 2, 7, 1);
    g.addnode(2, 4, 15, 1);
    g.addnode(4, 3, 11, 1);

    g.addnode(6, 5, 9, 1);
    g.addnode(4, 5, 6, 1);
    dijkstra(6, 7);
}