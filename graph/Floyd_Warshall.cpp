#include <bits/stdc++.h>
using namespace std;
int INF = INT_MAX; // we are entering data of infinity
void floyd_warshall(vector<vector<int>> &matrix_data)
{
    for (int via = 0; via < matrix_data.size(); via++)
    {
        /* code */
        for (auto i = 0; i < matrix_data.size(); i++)
        {
            /* code */
            for (int j = 0; j < matrix_data.size(); j++)
            {
                if (matrix_data[i][via] != INF && matrix_data[via][j] != INF)
                {
                    // Update the shortest distance
                    matrix_data[i][j] = min(matrix_data[i][j], matrix_data[i][via] + matrix_data[via][j]);
                }
            }
        }
    }
    cout << "YOUR SHORTEST DISTANCE MATRIX" << endl;
    for (int row = 0; row < matrix_data.size(); row++)
    {
        for (int col = 0; col < matrix_data.size(); col++)
        {
            if (matrix_data[row][col] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << matrix_data[row][col] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{

    vector<vector<int>> matrix_data = {
        // first input set
        // {0, 5, INF, 10},
        // {INF, 0, 3, INF},
        // {INF, INF, 0, 1},
        // {INF, INF, INF, 0}};
        // second input set
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}};
    floyd_warshall(matrix_data);
}