#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p; cin>>n>>p;

    if(!(n%2)){
        if(!(p%2))
            cout<<min(p/2, (n-p)/2);
        else
            cout<<min(p/2, (n-p)/2+1);
    }
    else{
        if(!(p%2))
            cout<<min(p/2, (n-p)/2);
        else
            cout<<min(p/2, (n-p)/2);
    }
}