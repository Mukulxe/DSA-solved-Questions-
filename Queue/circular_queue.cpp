#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;
        Queue(int size)
        {
            this->size=size;
            front=0;
            rear=0;
            arr=new int[size];
        }
        void push(int data)
        {

            //checking for circular condition
            if(front!=0 && rear==size-1)
            {
                rear=0;
                arr[rear]=data;
            }
            //check for space availabity
            if(front==0 && rear==size-1)
            {
                cout<<"short of space";
            }
            //if the element is first
            if(front==-1 &&rear==-1)
            {
                rear++;
                front++;
                arr[rear]=data;
            }
            // normal flow
            rear++;
            arr[rear]=data;
        }
        void pop()
        {
            //check is it empty
            if (front==-1)
            {
                cout<<"it is empty"<<endl;
            }
            //single element
            if(front==rear)
            {
                arr[front]=-1;
                rear=-1;
                front=-1;
            }
            //circular nature
            if(front==size-1)
            {
                front=0;
            }
            //normal flow
            arr[front]=-1;
            front++;
               
        }
        void print()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};
int main()
{
    Queue q(4);
    q.push(22);
    q.push(23);
    q.push(233);
    q.print();
}