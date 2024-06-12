//Có bao nhiêu số là bội tất cả các số mảng 1 và là ước tất cả các số mảng 2

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m; cin>>n>>m;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        int x; cin>>x; a.push_back(x);
    }
    for(int i=0; i<m; i++){
        int x; cin>>x; b.push_back(x);
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    vector<int> number;
    for(int i=a[0]; i<=b[0]; i+=a[0]){
        bool check = true;
        for(int j=0; j<n; j++){
            if(i%a[j]!=0){
                check = false;
                break;
            }
        }
        if(check) number.push_back(i);
    }

    int t = number.size();
    int ans = 0;
    for(int i=0; i<t; i++){
        bool check = true;
        for(int j=0; j<m; j++){
            if(b[j]%number[i]!=0){
                check = false;
                break;
            }
        }
        if(check) ans++;

    }

    cout<<ans<<endl;



}