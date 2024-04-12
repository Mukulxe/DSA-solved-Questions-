#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> v1, int wood, int mid)
{
    sort(v1.begin(), v1.end());
    int record = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] > mid)
        {
            record += abs(v1[i] - mid);
        }
    }
    return record >=wood;
}

int maxblade(vector<int> v1, int wood, int max)
{
    int start = 0;
    int end = max;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (ispossible(v1, wood, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v1 = {20, 15, 10, 17};
    int wood;
    int maxi = -1;
    for (int i = 0; i < v1.size(); i++)
    {
        maxi = max(maxi, v1[i]);
    }
    cout << "Enter the minimum wood: ";
    cin >> wood;
    int result = maxblade(v1, wood, maxi);
    cout << "Max blade should be: " << result << endl;
    return 0;
}
