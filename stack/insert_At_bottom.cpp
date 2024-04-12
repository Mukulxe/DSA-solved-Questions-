#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, target);
    s.push(temp);
}
void Atend(stack<int> &s, int &total_length)
{
    int target;
    if (total_length == 0)
    {
        cout << "stack is empty";
    }
    else
    {
        target = s.top();
        s.pop();
        solve(s, target);
    }
}
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    int size = s.size();
    Atend(s, size);
    printStack(s);
}
