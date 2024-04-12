#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,1,3,5,6,4};
    int ans;
    int mid;
    int start = 0;
    int size = v1.size()-1;
    int end=size;
    mid = start + (end - start) / 2;
    while (start <end)
    {
        mid = start + (end - start) / 2;
        if (v1[mid] < v1[mid+1])
        {
            start = mid + 1;
        }
        else 
        {

            end=mid;
        }
         
        
    }
    cout<<"your answer at Index:"<<end;
    cout<<endl;
    cout<<"ans your element is:"<<v1[end];
}