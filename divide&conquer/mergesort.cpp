#include <bits/stdc++.h>
using namespace std;
int merge(int arr[],int start,int end)
{
    int mid=(end-start)/2;
    int len1=mid-start+1;
    int len2=end-start;
    int arr1[len1];
    int arr2[len2];
    for (int i = start; i < len1; i++)
    {
        arr1[i]=arr[i];
    }
    for (int i = mid+1; i < len2; i++)
    {
        arr2[i]=arr[i];
    }
    // while ()
    // {
    //     /* code */
    // }
    
}
int mergesort(int arr[],int start,int end)
{
    int s=start;
    int e=end;
    int mid=(s-e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[]={2,3,1,4,41,5,22};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,start,end);
}