#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
char bomb[MAX][MAX];
int m, n;

int checkbomb(int x, int y){
    int ans = 0;

    if(bomb[x][y] == '*')
        return -1;

    else if(bomb[x][y] == '.'){
        for(int i=x-1; i<=x+1;i++){
            for(int j=y-1; j<=y+1; j++){
                if(i<0 || j<0 || i>=m || j>=n)
                    continue;
                else
                    if(bomb[i][j] == '*') ans++;
            }
        }
    }

    return ans;
}
int main(){
    cin>>m>>n;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin>>bomb[i][j];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(checkbomb(i, j) == -1)
                cout<<"* " ;
            else{
                int bomb = checkbomb(i, j);
                cout<<bomb<<" ";
            }

        }
        cout<<endl;
    }
    
}