#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> v1, int mid)
{
    int currentloc = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (abs(v1[currentloc] - v1[i]) >= mid)
        {
            return true;
        }
    }
    return false;
}

void binarysearch(int maxi, vector<int> v1)
{
    sort(v1.begin(), v1.end());
    int start = 0;
    int ans = 0;
    int end = maxi;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (possible(v1, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    std::cout << "The maximum possible distance is: " << ans << endl;
}

int main()
{
    vector<int> v1 = {4, 2, 1, 3, 6};
    int maxi = -1;
    for (int i = 0; i < v1.size(); i++)
    {
        maxi = max(maxi, v1[i]);
    }
    binarysearch(maxi, v1);
}
