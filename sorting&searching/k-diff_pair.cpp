// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v1={};
//     int k;
//     int i=0;
//     int j=v1.size()-1;
//     set<pair<int,int>>ans;
//     while (i<j)
//     {
//         if (v1[i]-v1[j]==k)
//         {
//             return v1[i],v1[j];
//             ans.insert({v1[i],v1[j]});
//             i++,j--;
//         }
//         if (v1[i]-v1[j]!=k)
//         {
//             i++;j--;
//         }
//     }
   
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {3,3,3,3,3}; // Assuming v1 is populated elsewhere
    int k=2;
    int i = 0;
    int j = v1.size() - 1;
    set<pair<int, int>> ans;

    while (i <= j)
    {
        if (abs(v1[i] - v1[j]) == k)
        {
            ans.insert({v1[i], v1[j]});
           
            j--;
        }
        else
        {
            i++;
            
        }
    }
    // Printing the elements of the set
    for (const auto &element : ans)
    {
        cout << "(" << element.first << ", " << element.second << ")" << endl;
    }

    return 0;
}
