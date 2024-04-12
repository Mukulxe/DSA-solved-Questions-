#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> v1, int target)
{
    int start = 0;
    int end = v1.size();
    int mid;
    int ans = -1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v1[mid] == target)
        {
            return mid;
        }
        if (v1[mid+1] == target)
        {
            return mid+1;
        }
        if (v1[mid-1] == target)
        {
            return mid-1;
        }
        if (v1[mid]<target)
        {
            start=mid+1;
        }
        if (v1[mid]>target)
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v1 = {10,30,40,20,50,80,70};
    int n;
    int p;
    int ans;
    std::cout << "enter the target_element" << endl;
    std::cin >> n;
    ans = fun(v1, n);
    if (ans==-1)
    {
        std::cout<<"no elemnt found";
    }
    else
    {
        std::cout << "your answer is:" << ans;
    }
}