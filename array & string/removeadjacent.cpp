#include <bits/stdc++.h>
using namespace std;
int main()
{
    string v;
    string ans = "";
    std::cout << "enter the string:"<<" ";
std:
    cin >> v;
    int i = 0;
    while (i < v.length())
    {
        if (ans.length()> 0)
        {
            if (ans [abs(ans.length() - 1)] == v[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(v[i]);
            }
        }
        else
        {
            ans.push_back(v[i]);
        }
        
        i++;
    }
    std::cout << ans;
}