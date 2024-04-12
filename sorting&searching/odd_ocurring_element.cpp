#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> v1)
{
    int start = 0;
    int end =v1.size()-1;
    int mid;
    int ans = -1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid % 2 == 0)
        {
            if (v1[mid] == v1[mid + 1])
            {
                start = mid + 2;
                
            }

            else
            {
                end=mid;
            }
        }
        else
        {
            if (v1[mid]==v1[mid+1])
            {
                end=mid-1;
            }
            else
            {
                start=mid+2;
            }
        }
        return mid;
    }
    // return mid;
}
int main()
{
    vector<int> v1 = {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int n;
    int p;
    int ans;
    ans = fun(v1);
    std::cout << "your odd element is:" << v1[ans];
}