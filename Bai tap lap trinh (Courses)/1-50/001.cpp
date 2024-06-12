//Bài toán quân hậu

#include <bits/stdc++.h>
using namespace std;

int n;
bool isInCol[13], isInDiag1[26], isInDiag2[26];

vector<int> curQueenSetX, curQueenSetY;
int boardCount = 0;

void printQueenSet(){
    bool board[13][13];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            board[i][j] = false;
    }


    for(int i=0; i<n; i++)
        board[curQueenSetX[i]-1][curQueenSetY[i]-1] = true;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}


void genQueenSet(int curRow){
    for(int curCol=1; curCol<=n; curCol++){
        
        int curDiag1 = curRow + curCol;
        int curDiag2 = curRow - curCol + 13;

        if(isInCol[curCol]) continue;
        if(isInDiag1[curDiag1]) continue;
        if(isInDiag2[curDiag2]) continue;

        curQueenSetX.push_back(curRow);
        curQueenSetY.push_back(curCol);
        isInCol[curCol] = true;
        isInDiag1[curDiag1] = true;
        isInDiag2[curDiag2] = true;


        if(curQueenSetX.size() == n){
            if(boardCount==1) return;
            printQueenSet();
            boardCount++;
        }
        else
            genQueenSet(curRow + 1);

        curQueenSetX.pop_back();
        curQueenSetY.pop_back();
        isInCol[curCol] = false;
        isInDiag1[curDiag1] = false;
        isInDiag2[curDiag2] = false;
    }
}


int main(){
    cin>>n; //n=5
    genQueenSet(1);
    return 0;
}