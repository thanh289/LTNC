#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> number;
    vector<int> odd;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x%2) odd.push_back(x);
        number.push_back(x);
    }
    
    sort(odd.begin(), odd.end());

    int index = 0;
    for(int i=0; i<n; i++)
        if(number[i]%2) number[i] = odd[index++];
    
    for(int i=0; i<n; i++)
        cout<<number[i]<<" ";
}