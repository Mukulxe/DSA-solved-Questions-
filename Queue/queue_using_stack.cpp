#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st1;
    stack<int>st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    while(!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }
    while(!st2.empty())
    {
        //here fifo operation is taking place
        cout<<"element are:"<<st2.top()<<endl;
        st2.pop();
    }
}
///method 2
