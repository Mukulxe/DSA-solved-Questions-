#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> v1, int x, int size)
{
    int mid;
    int ans = -1;
    int i = 1;
    while (i < size && v1[i] <= x)
    {
        i = i * 2;
    }
    int start = i / 2;
    int end = i;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (x < v1[mid])
        {
            end = mid - 1;
        }
        else if (x > v1[mid])
        {
            start = mid + 1;
        }
        else if (x == v1[mid])

        {
            ans = mid;
            break;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v1 = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int x;
    std::cout << "enter the element";
    std::cin >> x;
    int size = v1.size();
    int ans;
    ans = fun(v1, x, size);
    std::cout << "your  element is  at index:" << ans;
}
