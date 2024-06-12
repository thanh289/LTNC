#include <bits/stdc++.h>
using namespace std;


void print(vector<int> v){
    int n = v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void printElement(int n, vector<int> save){
    int sum = 0; int x = save.size();
    for(int i=0; i<x; i++)
        sum += save[i]; 
    if(sum == n){
        print(save);
        return;
    }
    if(sum>n) return;

    for(int i=n-1; i>=1; i--){
        if(save.empty() || (!save.empty() && save.back() >= i))
            save.push_back(i);
        else continue;
        printElement(n, save);
        save.pop_back();
    }
}


int main(){
    int n; cin>>n;
    vector<int> ans;
    cout<<n<<endl;
    printElement(n, ans);
}