#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    // phele window access karo
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    // we  will process remaining window
    for (int i = 3; i < 8; i++)
    {
        if (!q.empty())
        {
            cout << arr[q.front()]<<" ";
        }
        else
        {
            cout << 0;
        }
        while((!q.empty() && i - q.front() >= 3))
        {
            q.pop();
        }
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    if (!q.empty())
    {
        cout << q.front();
    }
    else
    {
        cout << 0;
    }
}