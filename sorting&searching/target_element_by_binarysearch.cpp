#include <bits/stdc++.h>
using namespace std;
int divisionfun(int divisor, int divident)
{
    int start = 0;
    int end = abs(divident - 1);
    int mid;
    int ans = -1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * abs(divisor) == abs(divident))
        {
            break;
            ans=mid;
        }
        else if (mid * abs(divisor) > abs(divident))
        {
            end = mid - 1;
        }
        else if (mid * abs(divisor) < abs(divident))
        {
            start = mid + 1;
            ans = mid;
        }
    }
    if (divisor > 0 && divident > 0 || divisor < 0 && divident < 0)
    {
        return ans;
    }
    else
    {

        return -(ans);
    }
}
int main()
{
    vector<int> v1 = {1, 2, 2, 4, 4, 4, 5, 5, 5, 5, 5, 25, 25};
    int n;
    int p;
    int ans;
    std::cout << "enter the divisor" << endl;
    std::cin >> n;
    std::cout << "enter the dividend" << endl;
    std::cin >> p;
    ans = divisionfun(n, p);
    std::cout << "your answer is:" << ans;
}