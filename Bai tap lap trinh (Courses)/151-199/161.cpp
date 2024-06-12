#include <bits/stdc++.h>
using namespace std;


void printRow(int m, int n){
    for(int i=1; i<=m; i++)
        cout<<" ";
    for(int i=1; i<=n; i++)
        cout<<"*";
    cout<<endl;
}

int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        printRow(n-i, 2*i-1);
    }
}