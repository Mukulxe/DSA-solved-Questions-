#include <iostream>
#include <vector>
using namespace std;
bool ispossiblefun(int mid, int m, vector<int> v1)
{
    int studentcount = 0;
    int pagesum = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        if (pagesum <= mid && studentcount<m)
        {
            studentcount++;
            pagesum += v1[i];
        }
        else
        {
            studentcount++;
            pagesum = 0;
            if (studentcount > m && pagesum > mid)
            {
                return false;
            }
            pagesum += v1[i];
        }
    }
    return true;
}

void binarysearch(vector<int> v1, int m)
{
    int sum = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        sum += v1[i];
    }
    int start = 0;
    int end = sum;
    int ans = 0;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (ispossiblefun(mid, m, v1) == true)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "The answer is: " << ans << endl;
}

int main()
{
    vector<int> v1 = {10, 20, 30, 40};
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    binarysearch(v1, n);
}
