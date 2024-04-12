#include <bits/stdc++.h>
using namespace std;
void printoutput(string & output)
{
    for (int i = 0; i < output.length(); i++)
    {
        cout<<output[i];
    } 
}
bool issafe(vector<vector<bool>> &visited,vector<vector<int>> &arr,int row,int col,string &output,int n)
{
    if (visited[row][col]==false && row<n && col<n && arr[row][col]==1 && row>=0 && col>=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solvemaze(vector<vector<bool>> &visited,vector<vector<int>> &arr,int row,int col,string &output,int n)
{
    //base case
    if (row==n-1 && col==n-1)
    {
        printoutput(output);
        return;
    }
    //down case-
  
    if (issafe(visited,arr,row+1,col,output,n))
    {
        visited[row+1][col]=true;
        output+="d";
        solvemaze(visited,arr,row+1,col,output,n);
        //backtrack
        output.pop_back();
        visited[row+1][col]=false;
    }
    //up case-
     if (issafe(visited,arr,row-1,col,output,n))
    {
        visited[row-1][col]=true;
          output+="u";
        solvemaze(visited,arr,row-1,col,output,n);
        //backtrack
        output.pop_back();
        visited[row-1][col]=false;
    }
    //leftcase-
     if (issafe(visited,arr,row,col-1,output,n))
    {
        visited[row][col-1]=true;
          output+="l";
        solvemaze(visited,arr,row,col-1,output,n);
        //backtrack
        output.pop_back();
        visited[row][col-1]=false;
    }
    //right case-
     if (issafe(visited,arr,row,col+1,output,n))
    {
        visited[row][col+1]=true;
        output+="r";
        solvemaze(visited,arr,row,col+1,output,n);
        //backtrack
        output.pop_back();
        visited[row][+1]=false;
    }
}
int main()
{
    int n = 3;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<vector<int>> arr = {{1, 0, 0},
                               {1, 1, 0},
                               {1, 1, 1}};
    int col = 0;
    int row = 0;
    string output="";
    solvemaze(visited,arr,col,row,output,n);
}
