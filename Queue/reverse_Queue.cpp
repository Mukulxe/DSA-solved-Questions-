#include <bits/stdc++.h>
using namespace std;
deque<int> dq;
void reversequeue()
{
    stack<int>st;
    while(!dq.empty())
    {
        int element=dq.front();
        dq.pop_front();
        st.push(element);
    }
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
};
int main()
{
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    reversequeue();
}