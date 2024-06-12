#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    map<int, int> m;

    for(int i=1; i<=n; i++){
        int x; cin>>x;
        m[x]++;
    }

    for(auto& x : m){
        if(x.second >=2){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}