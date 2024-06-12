#include <bits/stdc++.h>
using namespace std;

int main(){
    string substr = "", str = "";
    int m; cin>>m;
    for(int i=0; i<m; i++){
        int x; cin>>x;
        substr += x + 48;
    }
    // cout<<substr<<endl;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        str += x + 48;
    }
    // cout<<str<<endl;

    for(int i=0; i<=n-m; i++){
        string p = str.substr(i, m);
        // cout<<p<<endl;
        if(p == substr){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}