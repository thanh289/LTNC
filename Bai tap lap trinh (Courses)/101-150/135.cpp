#include <bits/stdc++.h>
using namespace std;


string revereString(string x){
    reverse(x.begin(), x.end());
    return x;
}


int main(){
    map<string, int> s_normal;
    set<string> s_reverse;

    int n; cin>>n;
    for(int i=0; i<n; i++){
        string x; cin>>x;
        s_normal[x]++;
        if(s_normal[x]>=2 && x == revereString(x))
            s_reverse.insert(revereString(x));
        if(x!=revereString(x))
            s_reverse.insert(revereString(x));
    }

    string ans;
    for(string x : s_reverse){
        if(s_normal.find(x) != s_normal.end()){
            ans = x;
            break;
        }
    }

    int t = ans.size();
    cout<<t<<" "<<ans[t/2]<<endl;


}