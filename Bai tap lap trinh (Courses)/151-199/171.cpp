#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        string s = to_string(x);
        int n = s.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if((s[i]-'0') != 0 && x % (s[i]-'0') == 0)
                ans++;
        }
        cout<<ans<<endl;
    }
}