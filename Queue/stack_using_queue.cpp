#include <bits/stdc++.h>
using namespace std;
stack<int> st;
queue<int> q1;
queue<int> q2;
void push(int element)
{
    stack<int> st;
    queue<int> q1;
    queue<int> q2;
    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(element);
    while (!q2.empty())
    {
        q1.push(q2.front());
        q2.pop();
    }
}
void pop()
{
    while (!q1.empty())
    {
        cout << "your elements are:" << q1.front();
        q1.pop();
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    // return 0;
}