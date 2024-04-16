#include <bits/stdc++.h>
using namespace std;
unordered_map<int, list<pair<int, int>>> adjlist;
bool checkflag = false;
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
void bellmanford(vector<int> &distance)
{
    for (auto i : adjlist)
    {
        /* code */
        int u = i.first;
        for (auto j : i.second)
        {
            /* code */
            int v = j.first;
            int wt = j.second;
            if (distance[u] != INT_MAX && wt + distance[u] < distance[v])
            {
                /* code */
                distance[v] = wt + distance[u];
            }
        }
    }
    // for checking negative cycle
    for (auto i : adjlist)
    {
        /* code */
        int u = i.first;
        for (auto j : i.second)
        {
            /* code */
            int v = j.first;
            int wt = j.second;
            if (distance[u] != INT_MAX && wt + distance[u] < distance[v])
            {
                /* code */
                checkflag = true;
                break;
            }
        }
    }
    if (checkflag == 1)
    {
        /* code */
        cout << "cycle present";
    }
    else
    {
        cout << "cycle not present";
    }
}
int main()
{

    graph g;
    g.addnode(3, 2, 5, 0);
    g.addnode(4, 3, -3, 0);
    g.addnode(3, 1, 1, 0);
    g.addnode(6, 3, 2, 1);
    g.addnode(6, 1, 14, 1);
    g.addnode(3, 1, 9, 1);
    g.addnode(3, 2, 10, 1);
    g.addnode(1, 2, 7, 1);
    g.addnode(2, 4, 15, 1);
    g.addnode(4, 3, 11, 1);

    g.addnode(6, 5, 9, 1);
    g.addnode(4, 5, 6, 1);
    int size = adjlist.size();
    vector<int> distance(adjlist.size(), INT_MAX);
    distance[0] = 0;
    bellmanford(distance);
}