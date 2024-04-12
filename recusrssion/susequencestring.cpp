#include <bits/stdc++.h>
using namespace std;
bool func(string s, int i)
{
    int size = s.length() - 1;
    if (i > size)
    {
        return 1;
    }
    return func(s,i-1)+func(s,i-1)+func(s,i-1);
}
int main()
{
    bool ans;
    int i = 0;
    string s = "abc";
    ans = func(s, i);
    cout << ans;
}
