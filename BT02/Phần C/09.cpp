#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin>>N;
    unsigned long long int ta = 1000001, tb = 1000001;

    while(N--){
        unsigned long long int a, b; cin>>a>>b;
        ta = min(a, ta);
        tb = min (b, tb);
    }

    unsigned long long int ans = ta*tb;
    cout<<ans<<endl;

}