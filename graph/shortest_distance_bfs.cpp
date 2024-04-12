#include <bits/stdc++.h>
using namespace std;
 unordered_map<int, list<pair<int, int>>> stor;
class graph
{
public:
    void addnode(int startnode, int endnode, int direction, int weight)
    {
        // for 1->unidirected graph
        // for 0->directed graph
        stor[startnode].push_back({endnode, weight});
        if (direction == 0)
        {
            /* code */
            stor[endnode].push_back({startnode, weight});
        }
    }
};
void short_path(vector<bool> &visited, vector<int> &parent, int src)
{
    queue<int> q;
    q.push(src);
    parent[src] = -1;
    while (!q.empty())
    {
        /* code */
        int head = q.front();
        q.pop();
        for (auto i : stor[head])
        {
            /* code */
            if (!visited[i.first])
            {
                /* code */
                q.push(i.first);
                visited[i.first] = true;
                parent[i.first] = head;
            }
        }
    }
}
void print(vector<int> &parent, int des)
{
    int node = des;
    stack<int> path; // Using a stack to store the path in reverse order
    while (parent[node] != -1)
    {
        path.push(node);
        node = parent[node];
    }
    // Print the path from source to destination
    cout << "Shortest path from source to destination: ";
    cout << node; // Print the source node
    while (!path.empty())
    {
        cout << " -> " << path.top(); // Print the nodes in reverse order
        path.pop();
    }
}

int main()
{
    graph g;
    g.addnode(0, 1, 1, 1); // Edge from node 0 to node 1 with weight 1 (unidirectional)
    g.addnode(0, 2, 1, 2); // Edge from node 0 to node 2 with weight 2 (unidirectional)
    g.addnode(1, 2, 1, 3); // Edge from node 1 to node 2 with weight 3 (unidirectional)
    g.addnode(1, 3, 1, 4); // Edge from node 1 to node 3 with weight 4 (unidirectional)
    g.addnode(2, 3, 1, 5);
    vector<bool> visited(stor.size(), false);
    vector<int> parent(stor.size(), -1);
    short_path(visited, parent, 0);
    print(parent, 3);
}