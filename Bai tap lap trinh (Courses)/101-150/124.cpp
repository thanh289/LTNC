#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    string s; cin>>s;
    while(m--){
        int l, r; cin>>l>>r;
        int size = r-l+1;
        string substr = s.substr(l-1, size);

        int count = 0;
        for(int i=l-1; i<=n-size; i+=size){
            string tmp = s.substr(i, size);
            if(tmp == substr) count++;
            else break;
        }

        cout<<count<<endl;
    }
}