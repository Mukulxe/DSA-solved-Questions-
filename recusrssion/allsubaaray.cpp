#include <bits/stdc++.h>
using namespace std;
void startmachine(vector<int>num,int start,int end)
{
    if(end==num.size())
    {
        return;
    }
    for (int i = start; i<=end; i++)
    {
         cout<<num[i]<<" ";
    }
    cout<<endl;
    startmachine(num,start,end+1);
}
int printsubsequnce(vector<int>num,int size,int start)
{
    for(int start=0;start<size;start++){
        int end=start;
        startmachine(num,start,end);
    }
}
int main()
{
    vector<int>num={1,2,3,4,5,6};
    int size=num.size();
    
    int start=0;
    printsubsequnce(num,size,start);
}