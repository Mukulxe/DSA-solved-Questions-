#include <bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(vector<int> &Height)
{
    vector<int> ans1(Height.size());
    stack<int> st;
    st.push(-1);
    for (int i = Height.size() - 1; i >= 0; i--)
    {
        int num = Height[i];
        while(st.top() != -1 && Height[st.top()] >= num)
        {
            st.pop();
        }
        ans1[i] = st.top();
        st.push(i);
    }
    return ans1;
}
vector<int> prevSmaller(vector<int> &Height)
{
    vector<int> ans2(Height.size());
    stack<int> st;
    st.push(-1);
    for (int i = 0; i <= Height.size() - 1; i++)
    {
        int num = Height[i];
        while(st.top() != -1 && Height[st.top()] >= num)
        {
            st.pop();
        }
        ans2[i] = st.top();
        st.push(num);
    }
    return ans2;
}
void getRectangleAreaHistogram(vector<int> &Height)
{
    vector<int> nextsmaller = nextSmaller(Height);
    vector<int> Prevsmaller = prevSmaller(Height);
    int area;
    int length;
    int width;
    int Maxarea = INT_MIN;
    for (int i = 0; i < Height.size(); i++)
    {
        length = Height[i];
        int nextelelement = nextsmaller[i];
        int previouselelement = Prevsmaller[i];
        if (nextelelement == -1 || previouselelement == -1)
        {
            nextelelement = Height.size();
            previouselelement = Height.size();
        }
        width = nextelelement - previouselelement - 1;
        area = length * width;
        Maxarea = max(area, Maxarea);
    }
    cout << "your maximum area is:" << Maxarea;
}
int main()
{
    vector<int> Height;
    Height.push_back(2);
    Height.push_back(1);
    Height.push_back(5);
    Height.push_back(6);
    Height.push_back(2);
    Height.push_back(3);
    getRectangleAreaHistogram(Height);
}



















































