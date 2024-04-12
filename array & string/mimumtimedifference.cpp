#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v1 = {"23:59","13:00","18:35"};
    vector<string> v2;
    for (int i = 0; i < v1.size(); i++)
    {
        string st = v1[i];
        int hrs = stoi(st.substr(0, 2));
        int min = stoi(st.substr(3, 2));
        int totaltime = hrs * 60 + min;
        v2.push_back(v1[i]);
    }
    sort(v2.begin(), v2.end());
    int diff;
    for (int i = 0; i < v2.size(); i++)
    {
      
        int min = 0;
        diff = v2[i + 1] - v2[i];
        diff = std::min(diff, min);
    }
    return diff;
    cout<<diff;
}
