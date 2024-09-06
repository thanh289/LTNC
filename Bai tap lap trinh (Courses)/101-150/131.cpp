//Ma trận kì ảo
/*
8 1 6
3 5 7
4 9 2
*/


#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    int matrix[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            matrix[i][j] = 0;
    }

    int sR=0, sC = n/2;
    int number = 1;
    matrix[sR][sC] = number++;
    
    while(number <= n*n){
        int tR1 = sR-1, tC1 = sC+1;
        if(tR1 == -1) tR1 = n-1;
        if(tC1 == n) tC1 = 0;

        if(!matrix[tR1][tC1]){
            matrix[tR1][tC1] = number++;
            sR = tR1; sC = tC1;
        }
        else{
            int tR2 = sR+1;
            if(tR2 == n) tR2 = 0;
            matrix[tR2][sC] = number++;
            sR = tR2;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    
}