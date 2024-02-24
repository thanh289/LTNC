#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

    int N; cin>>N;
    string star = "";
    for(int i=1; i<=N; i++)
        star += "*";

    for(int i=N; i>=1; i--){
        
        cout<<star<<endl;

        star.pop_back();
    }

    return 0;
}