#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int count[101];
    for(int i=0; i<101; i++)
        count[i]=0;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        count[x]++;
    }

    int ans = 0;
    for(int i=0; i<100; i++){
        ans = max(ans, count[i]+count[i+1]);
    }
    cout<<ans<<endl;
}