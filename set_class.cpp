#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,12,12,33,12,33,4,3,2};
    int arr2[]={12,33,33};
    set<int>st;
    // for (int i = 0; i <9; i++)
    // {
    //     st.insert(arr[i]);
    // }
    // for (auto i:st)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<st.size();
    // cout<<endl;
    // st.erase(12);
    // st.erase(33);
    // cout<<st.size();
    unordered_set<int>stt(arr,arr+9);
    for (auto i:arr2)
    {
        if (stt.find(i)!=stt.end())
        {
            cout<<i<<endl;
        }
    }
    
    // for (auto i:stt)
    // {
    //     cout<<i<<endl;
    // }
    // cout<<endl;
    // cout<<stt.size();
}