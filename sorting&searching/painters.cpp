#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int> v1, int mid, int k)
{
    int paintercount = 0;
    int paintersum = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (paintersum + v1[i] <= mid && paintercount < k)
        {
            
            paintersum += v1[i];
        }
        else
        {
            if (paintercount>k && paintersum>mid)
            {
                return false;
            }
            
            paintercount++;
            paintersum=0;
            paintersum = v1[i];
        }
    }
    paintercount++; // Increment painter count for the last iteration
    return paintercount <= k; // Return true if the number of painters used is less than or equal to k
}
int binarysearch(vector<int> v1, int k)
{
    int sum = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        sum += v1[i];
    }

    int start = 0;
    int end = sum;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (ispossible(v1, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> v1 = {10, 20, 30, 40};
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    int answer = binarysearch(v1, k);
    cout << "Your answer is: " << answer << endl;

    return 0;
}
