#include <bits/stdc++.h>
using namespace std;
void func(string s,int i)
{
    //base
    if(i>s.size())
    {
        return;
    }
    for(int j=0;j<i;j++)
    {
        cout<<s[j];
    }
    cout<<endl;
    func(s,i+1);
}
int main()
{
    string s="hello";
    func(s,0);
}