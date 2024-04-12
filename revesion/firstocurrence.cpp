#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,2,4,4,4,5,5,5,5,5,25,25};
    int ans;
    // int size;
    // cout<<"enter the size of element";
    // cin>>size;
    int target;
    cout<<"enter the target element";
    cin>>target;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> v1[i];
    // }
    int mid;
    int start = 0;
    int end = v1.size()-1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v1[mid] > target)
        {
            end = mid - 1;
        }
        else if(v1[mid]<target)
        {
            start=mid+1;
        }
        else if (v1[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
         mid = start + (end - start) / 2;
        
    }
    cout<<"your answer at Index:"<<ans;
}