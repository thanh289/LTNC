#include <bits/stdc++.h>
using namespace std;


bool check(int x){
    string s1 = to_string(x);
    string s2 = s1;
    reverse(s1.begin(), s1.end());
    if(s1 == s2) return true;
    return false;
}

int main(){
    int t; cin>>t;
    while(t--){
        int ans = 0;
        int a, b; cin>>a>>b;
        for(int i=a; i<=b; i++){
            if(check(i)) ans++;
        }
        cout<<ans<<endl;
    }
}