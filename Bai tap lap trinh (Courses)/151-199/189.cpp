#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    int mina = 1000001, minb = 1000001;
    for(int i=0; i<n; i++){
        int a, b; cin>>a>>b;
        mina = min(mina, a);
        minb= min(minb, b);
    }
    cout<<mina*minb<<endl;
}