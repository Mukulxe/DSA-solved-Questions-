#include <bits/stdc++.h>
using namespace std;
stack<int>st;
void reversequeue(queue<int> & dq)
{
    //base condition
    if (dq.empty())
    {
        return;
    }
    int element=dq.front();
     dq.pop();
    reversequeue(dq);
    dq.push(element);
};
void print(queue<int> &dq)
{
    while (!dq.empty())
    {
        cout<<dq.front()<<endl;
        dq.pop();
    }
}
int main()
{
    queue<int> dq;
    dq.push(1);
    dq.push(2);
    dq.push(3);
    dq.push(4);
    reversequeue(dq);
    print(dq);
}