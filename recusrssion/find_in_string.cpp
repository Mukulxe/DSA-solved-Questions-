#include <bits/stdc++.h>
using namespace std;
bool func(string s,int size,int i,char c)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    if (s[i]==c)
    {
        return true;
        // return 0;
    }
    
    return func(s,size,i+1,c);
}
int main()
{
    bool ans;
    string s="hello";
    char c='k';
    int i=0;
    int size=s.length();
    ans=func(s,size,i,c);
    cout<<"element is :"<<ans;
}