#include <bits/stdc++.h>
using namespace std;
int func(int size,string s,char target,int i)
{
  
    if(s[i]==target)
    {
        return i;
    }
    if(i>=size)
    {
        return -1;
    }
    return func(size,s,target,i-1);
}
int main()
{
    string s="abcddedg";
    int size=s.length();
    char target='d';
    int i=size-1;
    int ans=func(size,s,target,i);
    cout<<ans;
}
