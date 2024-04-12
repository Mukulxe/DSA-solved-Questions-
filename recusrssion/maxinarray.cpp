#include <bits/stdc++.h>
using namespace std;
int func(int arr[],int i,int size,int & max)
{
    if(i>=size)
    {
        return 0;
    }
    if (arr[max]<arr[i])
    {
        max=i;
    }
    return func(arr,i+1,size,max);
}
int main()
{
    int ans;
    int max=0;
    int arr[]={10,12,13,14,15};
    int i=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    func(arr,i,size,max);
    cout<<"your maximun number is:"<<arr[max];
}