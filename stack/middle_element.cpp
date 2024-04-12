#include <bits/stdc++.h>
using namespace std;
void findmiddle(stack<int> &s, int &total_length)
{
    if ((total_length / 2 ) == s.size())
    {
        cout << "your middle element is:" << s.top();
        return;
    }
    else
    {
        int temp = s.top();
        s.pop();
        findmiddle(s, total_length);
        s.push(temp);
    }
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
    findmiddle(s, size);
}
