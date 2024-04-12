#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans;
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> v1(n);
    cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < v1.size(); i++)
    {
        int index=abs(v1[i]);
        if (v1[index-1]>0)
        {
            v1[index-1]*=-1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v1[i]>0)
        {
            cout<<" your elemnts:"<<i+1;
        }
        cout<<endl;
    }
}