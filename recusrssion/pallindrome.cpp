#include <bits/stdc++.h>
using namespace std;
int func(string s,int i,int j)
{
    //base case
    if(i>=j)
    {
        return true;
    }
    if(s[i]==s[j])
    {
        return func(s,i+1,j-1);
    }
    if(s[i]!=s[j])
    {
        return false;
    }
}
int main()
{
    string s="karan";
    int size=s.length();
    int i=0;
    int j=size-1;
    int ans=func(s,i,j);
    if (ans==1)
    {
        cout<<"it is pallindrome";
    }
    else
    {
        cout<<"it is not pallindrome";
    } 
}