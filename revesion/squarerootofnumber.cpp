#include <bits/stdc++.h>
using namespace std;
int fun()
{
    int ans=-1;
    int target;
    cout<<"enter the element";
    cin>>target;
   
    int mid;
    int start = 0;
    int end = target;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid*mid == target)
        {
            return mid;
            break;
        }
        else if(mid*mid<target) 
        {
            start=mid+1;
            ans=mid;
        }
        else if (mid*mid>target)
        {
           
            end=mid-1;
        }
    }
    return ans;
}
int main()
{
    
    int count;
    int l=fun();
    double step=0.1;
    double y;
    double ans1=sqrt(l);
    cout<<"enter the number";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (double j = step ; j <=ans1 ; j=j+step)
        {
             y=j;
        }
        step=step/10;
    }
    cout<<"your answer is"<<y;
}
