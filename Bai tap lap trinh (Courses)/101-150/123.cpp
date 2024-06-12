#include <bits/stdc++.h>
using namespace std;



int rnd(double x){
    int ground = int(x);
    if(x-ground >=0.5) return x+1;
    if(x-ground <=-0.5) return x-1;
    return x;
}

int main(){
    double n; cin>>n;
    cout<<rnd(n);
}