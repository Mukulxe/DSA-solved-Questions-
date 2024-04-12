#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12}};
    int m = matrix.size();
    int n = matrix[0].size();
    int starting_row = 0;
    int ending_col = n-1;
    int ending_row = m-1;
    int starting_col = 0;
    int count = 0;
    int total_elemnts = m * n;
    while (count < total_elemnts)
    {
        for (int i = starting_col; i <= ending_col && count<total_elemnts ,i++;)
        {
            std::cout << matrix[starting_row][i];
             count++;
             if (count>total_elemnts)
             {
                break;
             }
             
        }
        starting_row++;
        for (int i = starting_row; i <= ending_row && count<total_elemnts , i++;)
        {
            std::cout << matrix[i][ending_col];
             count++;
             if (count>total_elemnts)
             {
                break;
             }
             
        }
        ending_col--;
        for (int i = ending_col; i >= starting_col&& count<total_elemnts ,i--;)
        {
            std::cout << matrix[ending_row][i];
             count++;
             if (count>total_elemnts)
             {
                break;
             }
             
        }
        ending_row--;
        for (int i = ending_row; i >= starting_row && count<total_elemnts , i--;)
        {
            std::cout << matrix[i][starting_col];
             count++;
             if (count>total_elemnts)
             {
                break;
             }
             
        }
        count++;
    }
}