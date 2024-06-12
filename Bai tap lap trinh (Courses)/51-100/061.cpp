#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(int m, int n){
    vector<vector<int>> matrix(m, vector<int>(n, 0));

    int num = 1;
    int rowStart = 0, rowEnd = m-1;
    int colStart = 0, colEnd = n-1;

    while(rowStart <= rowEnd && colStart <= colEnd){
        for(int i=colStart; i<=colEnd; i++){
            matrix[rowStart][i] = num++;
        }
        rowStart++;

        for(int i=rowStart; i<=rowEnd; i++){
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        if(rowStart<=rowEnd){
            for(int i=colEnd; i>=colStart; i--){
                matrix[rowEnd][i] = num++;
            }
            rowEnd--;
        }
        
        if(colStart<=colEnd){
            for(int i=rowEnd; i>=rowStart; i--){
                matrix[i][colStart] = num++;
            }
            colStart++;
        }
        
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    int m, n; cin>>m>>n;
    spiralMatrix(m, n);
}