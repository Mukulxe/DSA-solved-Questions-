#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>ump;
    int arr[]={10,12,12,42,121,21};
    for (auto i:arr)
    {
        ump[i]++;
    }
    for (auto i:ump)
    {
        cout<<i.first<<"frequency is->"<<i.second<<endl;
    }
    for(auto [key,val]:ump)
    {
        cout<<key<<":"<<val;
    }    
}