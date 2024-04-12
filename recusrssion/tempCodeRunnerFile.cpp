#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n==0)
    {
        return 0;
    }
    func(n=n%10);
    cout<<n;
}
int main()
{
   
    int n;
    n=234;
    func(n);
}