#include <bits/stdc++.h>
using namespace std;
bool binaryfunc(int arr[],int &start,int &end,int key) {
    int mid = start + (end - start) / 2;
   if (start>end)
   {
    return false;
   }
   
    if (arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]>key)
    {
        end=mid-1;
        return binaryfunc(arr,start,end,key);
    }
    else
    {
        start=mid+1;
        return binaryfunc(arr,start,end,key);
    }
   }
int main() {
    bool ans;
   int arr[]={2,4,5,7,9,10};
int start=0;
   int end=sizeof(arr)/sizeof(arr[0])-1;
   int key=5;
   ans=binaryfunc(arr,start,end,key);
   cout<<ans;
}
