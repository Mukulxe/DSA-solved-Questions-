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
        if (mid*mid<target)
        {
            start=mid+1;
        }
       else if (mid*mid>start)
        {
            end=mid-1;
        }
        else if (mid*mid==target)
        {
            return mid;
        }
    }
}
int main()
{
    vector<int>v1={1,2,2,4,4,4,5,5,5,5,5,25,25};
    int n;
    int p;
    int ans;
    double step=0.1;
    double finalans;
    std::cout<<"enter the element";
    std::cin>>n;
    std::cout<<"enter the precession";
    std::cin>>p;
    int size=v1.size()-1;
    ans=binarysearch(v1,size,n);
    int sqt=sqrt(n);
    if (ans==-1)
    {
        std::cout<<"no element found";
    }
    else
    {
        // std::cout<<ans;
     for (int i = 0; i < p; i++)
     {
        for (double j = sqt; j*j <=n; j=j+step)
        {
            finalans=j;
        }
        step=step/10;
     }
     cout<<"you square root is:"<<finalans;
    }
}