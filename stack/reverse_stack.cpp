//alternate method of printing stack in this form--------------------
// #include <bits/stdc++.h>
// using namespace std;

// void printStack(const stack<int> &s)
// {
//     stack<int> tempStack = s;
//     while (!tempStack.empty())
//     {
//         cout << tempStack.top() << " ";
//         tempStack.pop();
//     }
//     cout << endl;
// }

// void reversestack(stack<int> &s)
// {
//     if (s.empty())
//     {
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     reversestack(s);

//     // Move the 'printStack' call outside of the 'solve' function
//     cout << temp << " ";
//     // s.push(temp);
// }

// int main()
// {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);
//     s.push(70);
//     s.push(80);

//     reversestack(s);
//     cout << endl; // Add a newline for better formatting
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void printStack(stack<int> &s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void solve(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int topelemnt = s.top();
    s.pop();
    solve(s, target);
    s.push(topelemnt);
}
void reversestack(stack<int> &s)
{
    int temp;
    // base case
    if (s.empty())
    {
        return;
    }
    temp = s.top();
    s.pop();
    reversestack(s);
    solve(s, temp);
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
    // int size = s.size();
    reversestack(s);
    printStack(s);
    
}
