#include <bits/stdc++.h>
using namespace std;
void printsubseuqnce(string s,string outputstr,int i)
{
    if(i>=s.length() || i==-1)
    {
        cout<<outputstr<<endl;
        return;
    }
    //exclude case
    printsubseuqnce(s,outputstr,i+1);
    //include case
    outputstr.push_back(s[i]);
    printsubseuqnce(s,outputstr,i+1);
}
int main()
{
    string str="Mukul";
    int i =0;
    string outputstr="";
    printsubseuqnce(str,outputstr,i);
}                                