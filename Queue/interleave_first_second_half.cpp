#include <bits/stdc++.h>
using namespace std;

void reverse_Fun(queue<int> &q)
{
    queue<int> q2;
    int n = q.size() / 2;
    int count = 0;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        q2.push(element);
        count++;

        if (count == n)
        {
            break;
        }
    }

    int n2 = q2.size();
    int count2 = 0;

        //stepB: interleaving start krdo
    while (!q2.empty() && !q.empty())
    {
        int element1 = q2.front();
        q2.pop();
        q.push(element1);
        // second queue elemnts
        int element2 = q.front();
        q.pop();
        q.push(element2);
    }
       //odd wala case
        if(n&1) {
               int element = q.front();
               q.pop();
               q.push(element);
        }
}

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
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    reverse_Fun(q);
    print(q);

    return 0;
}
