#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int previous = -1;

    while(true){
        int x; cin>>x;

        if(x<0){
            cout<<x<<endl;
            break;
        }

        if(x != previous){
            cout<<x<<" ";
            previous = x;
        }

    }
}