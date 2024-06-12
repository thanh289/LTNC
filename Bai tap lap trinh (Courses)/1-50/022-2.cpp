#include <bits/stdc++.h>
using namespace std;


void generate(int n, string ans){

    if(n==0) {
        cout<<ans<<endl;
        return;
    }
    for(int i='0'; i<='1'; i++){
        ans += i;
        generate(n-1, ans);
        ans.pop_back();
    }
}


int main(){
    int n; cin>>n;
    generate(n, "");
}