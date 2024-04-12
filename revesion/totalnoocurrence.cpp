#include <bits/stdc++.h>
using namespace std;
int firstocurrence()
{
    vector<int> v1 = {1, 2, 2, 4, 4, 4, 5, 5, 5, 5, 5, 25, 25};
    int ans;
    int target;
    cout << "enter the target element";
    cin >> target;
    int mid;
    int start = 0;
    int end = v1.size() - 1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v1[mid] > target)
        {
            end = mid - 1;
        }
        else if (v1[mid] < target)
        {
            start = mid + 1;
        }
        else if (v1[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int lastocurrence()
{
       vector<int> v1={1,2,2,4,4,4,5,5,5,5,5,25,25};
    int ans;
   
    int target;
    cout<<"enter the target element";
    cin>>target;

    int start = 0;
    int end = v1.size()-1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v1[mid] > target)
        {
            end = mid - 1;
        }
        else if(v1[mid]<target)
        {
            start=mid+1;
        }
        else if (v1[mid]==target)
        {
            ans=mid;
            start=mid+1;
        }
         mid = start + (end - start) / 2;
        
    }
    return mid;
}
int main()
{
    int x=firstocurrence();
    int y=lastocurrence();
    int ans=(y-x);
    cout<<"your total ocurrence is:"<<ans;
}

