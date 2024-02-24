#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e7;
bool Prime[MAX];



int main(){
    int n; cin>>n;

    if(n==0 || n==1 || n<0){
        cout<<"no"<<endl;
        return 0;
    }


    Prime[0] = 1;
    Prime[1] = 1;

    //0 -> prime
    //1 -> not prime
    for(int i=2; i*i<=MAX; i++){
        if(!Prime[i]){
            for(int j = i*i; j<= MAX; j+=i)
                Prime[j] = 1;
        }
    }

    if(!Prime[n]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
}