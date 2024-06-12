#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    for(int i=1; i<=n-1; i++) cout<<" ";
    cout<<"*"<<endl;

    int firstBlank = n-2; 
    int midBlank = 1;
    for(int i=1; i<=n-2; i++){
        for(int i=1; i<=firstBlank; i++)
            cout<<" ";
        cout<<"*";
        for(int i=1; i<=midBlank; i++)
            cout<<" ";
        cout<<"*"<<endl;
        firstBlank--;
        midBlank+=2;
    }

    if(n!=1)
        for(int i=1; i<=2*n-1; i++)
            cout<<"*";
}