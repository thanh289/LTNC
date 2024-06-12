#include <bits/stdc++.h>
using namespace std;

void generateHadamard(vector<vector<char>>& matrix, int size, int top, int left) {
    if (size == 1) {
        matrix[top][left] = '.';
        return;
    }
    
    int newSize = size / 2;

    generateHadamard(matrix, newSize, top, left);
    generateHadamard(matrix, newSize, top, left + newSize);
    generateHadamard(matrix, newSize, top + newSize, left);
    generateHadamard(matrix, newSize, top + newSize, left + newSize);
    
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            if (matrix[top + newSize + i][left + newSize + j] == '.') {
                matrix[top + newSize + i][left + newSize + j] = 'o';
            } else {
                matrix[top + newSize + i][left + newSize + j] = '.';
            }
        }
    }
}

int main(){
    int n; cin>>n;
    int N = pow(2, n);

    vector<vector<char>> matrix(N, vector<char>(N, '.'));

    generateHadamard(matrix, N, 0, 0);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}