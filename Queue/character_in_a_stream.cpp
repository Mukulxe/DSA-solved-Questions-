#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> q;
    string str = "aabc";
    vector<int> v(str.length(),0);
    string ans = "";
    // int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char element = str[i];
        v[element - 'a']++;
        q.push(element);
        while (!q.empty())
        {
            if (v[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i] << " ";
    }
}