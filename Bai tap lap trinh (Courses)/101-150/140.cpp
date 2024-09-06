#include <bits/stdc++.h>
using namespace std;


void print(vector<int> v){
    int n = v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void printElement(int n, vector<int> ans){

    int sum = 0, t = ans.size();

    for(int i=0; i<t; i++)
        sum += ans[i];

    if(sum == n){
        print(ans); return;
    }
    if(sum > n) return;


    for(int i=n; i>=1; i--){
        if(ans.empty() || (!ans.empty() && ans.back() >= i))
            ans.push_back(i);
        else continue;
        printElement(n, ans);
        ans.pop_back();
    }
}

int main(){
    int n; cin>>n;
    vector<int> ans;
    printElement(n, ans);
}