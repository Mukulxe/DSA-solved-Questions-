#include <bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    int size;
    int *arr;
    int rear;
    int front;
    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }
    void push(int data)
    {
        if(rear==size)
        {
            cout<<"it is full"<<endl;
        }
        else
        {
            arr[rear]=data;
            rear++;
        }
    }
    void pop(int data)
    {
        if(rear==front)
        {
            cout<<"it is empty";
        }
        else
        {
            arr[front]=-1;
            front++;
            if (rear==front)
            {
                front=0;
                rear=0;                
            }
            
        }
    }
    void is_empty()
    {
        if(front==rear)
        {
            cout<<"it is empty";
        }
    }
    int find_top()
    {
        if(rear==front)
        {
            cout<<"it is empty";
        }
        else
        {
             return arr[front];
        }
    }
    void print()
    {
        for (int i=front;i<rear;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Queue q(4);
    q.push(12);
    q.push(2);
    q.push(23);
    q.push(23);
    q.push(12);
    q.print();
}