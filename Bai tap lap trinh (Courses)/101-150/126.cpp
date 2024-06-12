#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> wait;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        wait.push_back(x);
    }
    sort(wait.begin(), wait.end());

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += wait[i] * (n-i-1);
    }
    cout<<sum<<endl;
}