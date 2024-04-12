#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> v1, int size)
{
    int start = 0;
    int end = size - 1;
    int mid;
    mid = start + (end - start) / 2;
    int element = v1[mid];
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (v1[mid] < v1[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return v1[end];
}
int main()
{
    vector<int> v1 = {0, 10, 5, 2};
    int n;
    int size = v1.size() - 1;
    int ans = binarysearch(v1, size);
    if (ans == -1)
    {
        std::cout << "no element found";
    }
    else
    {
        std::cout << "your peak element is" << ans;
    }
}