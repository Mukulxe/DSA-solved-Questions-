#include <bits/stdc++.h>
using namespace std;
class kqueue
{
    int *arr;
    int *top;
    int *next;
    int freespot = 0;
    int n;
    int k;

public:
    kqueue(int k1, int n1)
    {
        k = k1;
        n = n1;
        arr = new int[n];
        next = new int[n];
        top = new int[k];
    }
    void push(int data);
    void pop(int index);
};
kqueue::kqueue(int k1, int n1)
{
    int k = k1;
    int n = n1;
    arr = new int[n];
    next = new int[n];
    top = new int[k];
    for (int i = 0; i < k; i++)
    {
        top[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        next[i] = i + 1;
    }
}
void kqueue::push(int data)
{
    if (freespot > n)
    {
        cout << "overeflow";
    }
    arr[freespot] = data;
    next[freespot] = top[k];
    top[k] = freespot;
    freespot = next[freespot];
}
void kqueue::pop(int index)
{
    int i=top[index];
    arr[i]=-1;
    next[i]=NULL;
}
