#include <bits/stdc++.h>
using namespace std;
stack<int> st;
void reversequeue(queue<int> &q, int k)
{
     int n = q.size();
    int count = 0;
    while (!q.empty())
    {
        count++;
        int element = q.front();
        q.pop();
        st.push(element);
        if (count == k)
        {
            break;
        }
        if (k == 0 || k > n)
        {
            return;
        }
    }
    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }
    int range = q.size();
    int count2 = 0;
    for (int i = 0; i < k; i++)
    {
        int element = q.front();
        q.pop();
        st.push(element);
        count2++;
        if (count2 == range)
        {
            break;
        }
           if (k == 0 || k > n)
        {
            return;
        }
    }
};
void print(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
int main()
{
    queue<int> q;
    int k;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout << "enter your element" << endl;
    // cout<<"\n";
    cin >> k;
    reversequeue(q, k);
    print(q);
}