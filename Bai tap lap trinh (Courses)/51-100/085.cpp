#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n; cin>>m>>n;
    char board[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>board[i][j];
    }

    for(int i=0; i<m ;i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == '*') continue;

            int count = 0;
            for(int k=i-1; k<=i+1; k++){
                for(int t=j-1; t<=j+1; t++){
                    if(k==i && t==j) continue;
                    if(k>=0 && k<=m-1 && t>=0 && t<=n-1){
                        if(board[k][t] == '*')
                            count++;
                    }
                }
            }
            board[i][j] = count + 48;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
}