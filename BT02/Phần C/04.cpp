#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    string star = string(2*N+1, '*');

    int dis = 0;

    for(int i=0; i<=N; i++){
        cout<<star<<endl;
        star[i] = ' ';
        star[2*N-i] = ' ';
    }
}