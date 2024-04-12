#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>v1,int size,int target)
{
    int start=0;
    int end=size;
    int mid;
    int ans=-1;
    mid=start+(end-start)/2;
    int element=v1[mid];
    while (start<=end)
    {
        mid=start+(end-start)/2;
        // element=v1[mid];
        if (target<v1[mid])
        {
            end=mid-1;
        }
        else if (target>v1[mid])
        {
            start=mid+1;
        }
        else if (target==v1[mid])
        
        {
            end=mid-1;
            ans=mid;
        }
    }
       return ans;
}
int main()
{
    vector<int>v1={1,2,2,4,4,4,5,5,5,5,5,25,25};
    int n;
    int ans;
    std::cout<<"enter the target element";
    std::cin>>n;
    int size=v1.size()-1;
    ans=binarysearch(v1,size,n);
    if (ans==-1)
    {
        std::cout<<"no element found";
    }
    else 
    {
        std::cout<<ans;
    }
}


