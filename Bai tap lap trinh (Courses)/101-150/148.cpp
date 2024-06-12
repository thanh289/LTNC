#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<int, int> a, b;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a[x]++;
    }
    for(int i=0; i<=n; i++){
        int x; cin>>x;
        b[x]++;
    }

    for(auto& x : b){
        if(x.second != a[x.first]){
            cout<<x.first<<endl;
            break;
        }            
    }
}