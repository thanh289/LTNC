//In ra số có tần suất xuất hiện lớn nhất

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;

    map<int, int> m;

    for(int i=1; i<=n; i++){
        int x; cin>>x;
        m[x]++;
    }

    int ans;
    int count = 0;

    for(auto& x : m){

        if(count < x.second) ans = x.first;
    }
    cout<<ans<<endl;
}