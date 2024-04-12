#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector <vector<int>>v1,int size,int target)
{
   
    int row=v1.size();
    int col=v1[0].size();
    int start=0;
    int end=(col*row)-1;
    int mid;
    int ans=-1;
    mid=start+(end-start)/2;
    while (start<=end)
    {
        int rowindex=mid/col;
        int colindex=mid%col;
        mid=start+(end-start)/2;
        if (v1[rowindex][colindex]<target)
        {
            start=mid+1;
        }
       else if (v1[rowindex][colindex]>target)
        {
            end=mid-1;
        }
        else if (v1[rowindex][colindex]==target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector <vector<int>>v1=
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12}
    };
    int n;
    int p;
    int ans;
    std::cout<<"enter the target  element"<<endl;
    std::cin>>n;
    int size=v1.size();
    ans=binarysearch(v1,size,n);
    if (ans==false)
    {
        std::cout<<"no element found";
    }
    else
    {
        std::cout<<"element found";
    }
}