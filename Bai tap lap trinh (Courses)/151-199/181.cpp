#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int n = s.size();
    for(int i=0; i<n-1; i++){
        if(s[i] >= s[i+1])
            return false;
    }
    return true;
}

void print(int k, string s, string ans = ""){
    int x = s.size();
    for(int i=0; i<x; i++){

        int t = ans.size();
        if(t==k){
            if(check(ans)){
                for(int i=0; i<t; i++)
                    cout<<ans[i]<<" ";
                cout<<endl;
                return;
            }
            else return;
        }
        ans += s[i];
        print(k, s, ans);
        ans.pop_back();
    }
}

int main(){
    int n, k; cin>>n>>k;
    string s = "";
    for(int i=0; i<n; i++)
        s += 'a' + i;
    print(k, s);

}