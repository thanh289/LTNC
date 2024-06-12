#include <bits/stdc++.h>
using namespace std;


bool check(int x, int k){
    string s = to_string(x);
    int sum = 0;
    int t = s.size();
    for(int i=0; i<t; i++)
        sum += s[i] - '0';

    if(sum%k) return false;
    return true;
}

int main(){
    int n, k; cin>>n>>k;
    int ans = 0;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        if(check(x, k)) ans++;
    }
    cout<<ans<<endl;
}