#include <bits/stdc++.h>
using namespace std;
void nextsmaller(vector<int>&input)
{
    stack<int>st;
    vector<int>ans(input.size());
    st.push(-1);
    for(int i=input.size()-1;i>=0;i--)
    {
        int no=input[i];
        while(st.top()>=no)
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(no);
    }
    cout<<"your next smaller elements:"<<endl;
    for(int i=0;i<input.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
void previouSmaller(vector<int>&input)
{
    stack<int>st;
    vector<int>ans(input.size());
    st.push(-1);
    for(int i=0;i<=input.size()-1;i++)
    {
        int no=input[i];
        while(st.top()>=no)
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(no);
    }
     cout<<"your next previous smaller elements:"<<endl;
    for(int i=0;i<input.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);
    nextsmaller(input);
    previouSmaller(input);
}   