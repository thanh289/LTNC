#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;
vector<vector<int>> matrix(MAX, vector<int>(MAX, 0));
int m, n;

bool cmpMatrixPointUpgrade(int x, int y)
{
    int up = x-1, down = x+1, left = y-1, right = y+1;
    for(int i=up; i<=down; i++)
    {
        if(i<0 || i>=m) continue;
        for(int j=left; j<=right; j++)
        {
            if(j<0 || j>=n) continue;
            if(i==x && j==y) continue;
            if(matrix[x][y] <= matrix[i][j]) return false;
        }
    }
    return true;
}


bool cmpMatrixPoint(int x, int y)
{
    int up = x-1, down = x+1, left = y-1, right = y+1;
    if(up>=0)
    {
        if(matrix[x][y] <= matrix[up][y]) return false;
    }

    if(down<m)
    {
        if(matrix[x][y] <= matrix[down][y]) return false;
    }

    if(left>=0)
    {
        if(matrix[x][y] <= matrix[x][left]) return false;
    }

    if(right<n)
    {
        if(matrix[x][y] <= matrix[x][right]) return false;
    }

    return true;
}


int main()
{
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int ans = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(cmpMatrixPoint(i, j)) ans++;
        }
    }
    
    cout<<ans<<endl;
}