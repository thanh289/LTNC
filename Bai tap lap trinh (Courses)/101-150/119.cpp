#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, v1, x2, v2;
    cin>>x1>>v1>>x2>>v2;

    if(x1==x2){
        cout<<"YES"<<endl;
        return 0;
    }
    if(x1<x2)
    {
        while(x1<x2){
            x1 += v1;
            x2 += v2;
        }
        if(x1==x2)
            cout<<"YES"<<endl;
        else if(x1>x2)
            cout<<"NO"<<endl;
    }
    
    else{
        while(x1>x2){
            x1 += v1;
            x2 += v2;
        }
        if(x1==x2)
            cout<<"YES"<<endl;
        else if(x1<x2)
            cout<<"NO"<<endl;
    }
}