//Chuyển đổi một ma trận kề thành một danh sách kề đường đi giữa các thành phố

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> to_adjacency_list(int **M, int n)
{
    vector<vector<int>> ans(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(M[i][j]) ans[i].push_back(j);
        }
    }
    return ans;
}

int main()
{
    int n; cin>>n;
    int** matrix = new int*[n];
    for(int i=0; i<n; i++)
        matrix[i] = new int[n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>matrix[i][j];
    }

    vector<vector<int>> L = to_adjacency_list(matrix, n);
    for (int i = 0; i < L.size(); i ++){
        for (int j = 0; j < L[i].size(); j ++)
            cout << L[i][j] << " ";
        cout << endl;
}
}