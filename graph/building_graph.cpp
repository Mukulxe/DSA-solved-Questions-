#include <bits/stdc++.h>
using namespace std;
class graph
{
public:
    map<int, list<int>> stor1;
    map<int,list<pair<int,int>>>stor2;
    void addnode(int startnode, int endnode, int direction)
    {
        // for 1->unidirected graph
        // for 0->directed graph
        stor1[startnode].push_back(endnode);
        if (direction == 0)
        {
            /* code */
            stor1[endnode].push_back(startnode);
        }
    }
    void weighted_graph_addnode(int startnode, int endnode, int direction,int weight)
    {
        // for 1->unidirected graph
        // for 0->directed graph
        stor2[startnode].push_back({endnode,weight});
        if (direction == 0)
        {
            /* code */
            stor2[endnode].push_back({startnode,weight});
        }
    }
    void printgraph()
    {
        for (auto i : stor1)
        {
            cout << i.first << " ->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
    void print_weighted_graph()
    {
        for(auto node: stor2) {
     cout << node.first << "-> " ;
     for(auto neighbour: node.second) {
       cout <<"("<<neighbour.first<<","<<neighbour.second<<"), ";
     }
     cout << endl;
   }
    }
};
int main()
{
    graph p;
    // p.addnode(0, 1, 0);
    // p.addnode(1, 3, 0);
    // p.addnode(0, 2, 0);
    // p.addnode(2, 4, 1);
    // p.printgraph();
    p.weighted_graph_addnode(0, 1, 0,4);
    p.weighted_graph_addnode(1, 3, 0,3);
    p.weighted_graph_addnode(0, 2, 0,3);
    p.weighted_graph_addnode(2, 4, 1,3);
    p.print_weighted_graph();
}