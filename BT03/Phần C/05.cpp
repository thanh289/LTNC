#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int tornado[MAX][MAX];
int x, y;

bool checkbreak(int t){
    if(t == x*y+1)
        return true;
    return false;
}


int main(){
    cin>>x>>y;
    int number = 1;
    int up = 0, down = x-1, left = 0, right = y-1;

    while(true){
        
        for(int i=left; i<right; i++)
            tornado[up][i] = number++;
        if(checkbreak(number)) break;

        for(int i=up; i<down; i++)
            tornado[i][right] = number++;
        if(checkbreak(number)) break;

        for(int i=right; i>left; i--)
            tornado[down][i] = number++;
        if(checkbreak(number)) break;
        
        for(int i=down; i>up; i--)
            tornado[i][left] = number++;
        if(checkbreak(number)) break;
        
        up++; down--; left++; right--;

    }

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++)
            cout<<tornado[i][j]<<"   ";
        cout<<endl;
    }
}