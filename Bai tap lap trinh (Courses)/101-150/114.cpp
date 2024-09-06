#include <bits/stdc++.h>
using namespace std;

int n, k;

void print(int count, string s, string ans){
    int x = s.length();

    if(x==0){
        cout<<ans<<endl;
        return;
    }
    
    for(int i=0; i<x; i++){
        int t = ans.length();
        if(t == count){
            cout<<ans<<endl;
            return;
        }
        else{
            ans += s[i];
            string temp = s;
            s.erase(i, 1);
            print(count, s, ans);
            s = temp;
            ans.pop_back();
        }
    }

}

int main(){
     
    cin>>n>>k;
    // a ~ 97
    string s = "";
    for(int i=0; i<n; i++)
        s += 'a' + i;

    print(k, s, "");
    

}