#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(20);
    st.push(21);
    st.push(22);
    st.push(23);
    int len=st.size();
    cout<<st.top()<<endl;
    if(st.empty()==1)
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"stack is not empty";
    }
    for(int i=0;i<len;i++)
    {
        // cout<<st[i];
    }
}