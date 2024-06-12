#include <bits/stdc++.h>
using namespace std;


void print(int n, string s, string ans = ""){
    
    int x = s.length();
    for(int i=0; i<x; i++){
        
        
        if(n==4) return;
        ans += s[i];
        if(ans.length() > 1) cout<<ans<<" ";
        print(n+1, s, ans);
        ans.pop_back();
        
    }
}


int main(){
    string s; cin>>s;
    print(1, s);
}