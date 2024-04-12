#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }
    void push1(int data)
    {
        if (top1 - top2 == 1)
        {
            cout << "limit full bro in stack 1" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "limit full bro in stack 2" << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop1()
    {
        if (top1 ==-1)
        {
            cout << "underflow in stack 1" << endl;
        }
        else
        {
            arr[top1]=0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "underflow in stack 2" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }
    void print()
    {
        for (int i = 0; i <size; i++)
        {
            cout << arr[i] << endl;
        }
        cout<<endl;
    }
};
int main()
{
    Stack s(6);
    s.push1(1);
    s.push1(2);
    s.push1(3);

    s.push2(4);
    s.push2(5);
    s.push2(6);


    s.print();
    // s.pop1();
    s.pop2();
    s.pop2();
    s.print();
}