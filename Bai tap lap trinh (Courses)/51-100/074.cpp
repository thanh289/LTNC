#include <bits/stdc++.h>
using namespace std;


int main(){
    map<int, int> count;
    int n, k; cin>>n>>k;

    for(int i=0; i<n; i++){
        int x; cin>>x;

        count[x]++;
    }

    int ans = 10000000;
    for(auto& x : count){
        if(x.second >= k){
            ans = x.first;
            break;
        }
    }

    if(ans==10000000) cout<<"NOT FOUND"<<endl;
    else cout<<ans<<endl;

}