#include <bits/stdc++.h>
using namespace std;


class Table{
    int r, c;
    char matrix[51][51];

public:

    Table(int m, int n){
        r = m; c = n;
    }

    void set(int x, int y, char symbol){
        matrix[x][y] = symbol;
    }

    int getScore(int x, int y){
        int point = 0;
        
        for(int i=x-1; i<=x+1; i++){
            for(int j=y-1; j<=y+1; j++){
                if(i>=0 && i<=r-1 && j>=0 && j<=c-1){
                    if(i==x && j==y) continue;
                    if(matrix[i][j] == matrix[x][y])
                        point++;
                }
            }
        }
        return point;
    }
};

