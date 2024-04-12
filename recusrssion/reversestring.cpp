#include <bits/stdc++.h>
using namespace std;
int func(string s,int size,int i)
{
    if(i>=0)
    {
        cout<<s[i];
        return func(s,size,i-1);
    }
}
int main()
{
    string s="abcde";
    int size=s.length();
    int i=size-1;
    string str=" " ;
    func(s,size,i);
}