#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    set<int> se;

    for(int i=1; i<=n; i++){
        int x; cin>>x;
        se.insert(x);
    }

    int count = 0;
    for(int i=0; i<=9; i++){
        if(se.find(i) == se.end()){
            cout<<i<<" ";
            count++;
        }
    }

    if(!count) cout<<"None"<<endl;
}