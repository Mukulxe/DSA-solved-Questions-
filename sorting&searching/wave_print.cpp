// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;
// int wavematrix(vector<vector<int>>v)
// {
    
//     int m=v.size();//row
//     int n=v[0].size();//col
//     for (int i = 0; i < n; i++)
//     {
//         if ((i &1)==0)
//         {
//             for (int row = 0; row <m ; row++)
//             {
//                std::cout<<v[row][i]<<" ";
//             }
//         }
//         else
//         {
//             for (int i1 = m-1; i1>=0; i1--)
//             {
//                 std::cout<<v[i1][i]<<" ";
//             }
//         }
//     }


// }
// int main()
// {
//     vector<vector<int>>v{
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12}
//     };
//     wavematrix(v);
// }
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int wavematrix(vector<vector<int>>v)
{

    int m=v.size();//row
    int n=v[0].size();//col
    for (int i = 0; i < m; i++)
    {
        if ((i &1)==0)
        {
            for(int col = 0; col <n ; col++)
            {
               std::cout<<v[i][col]<<" ";
            }
        }
        else
        {
            for(int i1 = 0; i1<n; i1++)
            {
                std::cout<<v[i][i1]<<" ";
            }
        }
    }
}
int main()
{
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavematrix(v);
}
