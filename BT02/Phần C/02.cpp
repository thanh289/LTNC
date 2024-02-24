#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    string star = string(N, '*');

    for(int i=0; i<N; i++){
        cout<<star<<endl;
        star[i] = ' ';
    }

    return 0;
}