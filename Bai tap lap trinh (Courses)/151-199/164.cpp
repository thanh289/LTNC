#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    cout<<"*"<<endl;

    int midBlank = 0;
    for(int i=1; i<=n-2; i++){
        cout<<"*";
        for(int i=1; i<=midBlank; i++)
            cout<<" ";
        cout<<"*"<<endl;
        midBlank++;
    }

    if(n!=1)
        for(int i=1; i<=n; i++)
            cout<<"*";
}