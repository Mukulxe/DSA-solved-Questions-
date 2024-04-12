//col wise wave form
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> v1 = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         };
//     int row = v1.size();
//     int col = v1[0].size();
//     for (int startcol = 0; startcol < col; startcol++)
//     {
//         if ((startcol & 1) == 0)
//         {
//             for (int j = 0; j < row; j++)
//             {
//                 cout<<" "<<v1[j][startcol];
//             }
            
//         }

//         else
//         {
//             for (int i = row-1; i >=0; i--)
//             {
//                 cout<<" "<<v1[i][startcol];
//             }
            
//         }
        
//     }
// }
///row eise wabe form
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v1 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        };
    int row = v1.size();
    int col = v1[0].size();
    for (int startrow = 0; startrow < col; startrow++)
    {
        if ((startrow & 1) == 0)
        {
            for (int j = 0; j < col; j++)
            {
                cout<<" "<<v1[startrow][j];
            }
            
        }

        else
        {
            for (int i = col-1; i >=0; i--)
            {
                cout<<" "<<v1[startrow][i];
            }
            
        }
        
    }
}
