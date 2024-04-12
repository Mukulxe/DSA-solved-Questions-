#include <bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<char>> &board,int row,int col,int n)
{
    int i=row;
    int j=col;
    while (j>=0)
    {
        if (board[i][j]=='Q')
        {
            return false;
        }
        j--;
    }
     i=row;
     j=col;
    while (j>=0 && i>=0)
    {
        if (board[i][j]=='Q')
        {
            return false;
        }
        i--;
        j--;
    }
     i=row;
    j=col;
    while (j>=0 && i<n)
    {
        if (board[i][j]=='Q')
        {
            return false;
        }
        i++;
        j--;
    }
     return true;
}
void printsolution(vector<vector<char>> &board,int n)
{
    for (int roww = 0; roww < n; roww++)
          {
            for (int col = 0; col < n; col++)
            {
                cout<<board[roww][col]<<" ";
            }
            cout<<endl;
          }  
           std::cout<<endl;
       }
      
void solve(vector<vector<char>> &board,int col,int n)
{
       if (col>=n)
       {
         printsolution(board,n);
         return;
         
        
       }
       for (int  row = 0; row <n; row++)
       {
         if (issafe(board,row,col,n))
         {
            board[row][col]='Q';
            solve(board,col+1,n);
            //backtracking
            board[row][col]='-';
         }
       }
}
int main()
{
    int n=6;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col=0;
    solve(board,col,n);
}
