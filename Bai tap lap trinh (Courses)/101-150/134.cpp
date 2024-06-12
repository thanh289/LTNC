#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin>>n>>q;
    vector<vector<int>> number(n);

    for(int i=0; i<n; i++){
        int t; cin>>t;
        for(int j=0; j<t; j++){
            int x; cin>>x;
            number[i].push_back(x);
        }
    }

    for(int i=0; i<q; i++){
        int x, y; cin>>x>>y;
        cout<<number[x][y]<<endl;
    }

}