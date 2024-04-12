#include <bits/stdc++.h>
using namespace std;
void insertfunc(stack<int> &s, int &target)
{
    int topelement;
    if (s.empty())
    {
        s.push(target);
        return;
    }
    // base case
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }
    topelement = s.top();
    s.pop();
    insertfunc(s, target);
    //backtrack
    s.push(topelement);
}
void sortstack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int targetElement=s.top();
    s.pop();
    sortstack(s);
    insertfunc(s,targetElement);
}
void print(stack<int> &s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
int main()
{
    stack<int> s;
    int target;
    s.push(9);
    s.push(5);
    s.push(3);
    s.push(11);
    s.push(7);
    sortstack(s);
    print(s);
}