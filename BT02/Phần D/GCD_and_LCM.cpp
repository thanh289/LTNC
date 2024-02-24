#include <bits/stdc++.h>
using namespace std;


int GCD(int a, int b){
    while(a!=b){
        if(a>b)
            a -= b;
        else
            b -= a;
    }

    return a;
}

int LCD(int a, int b){
    int result = GCD(a, b);
    return a * b / result;
}

int main(){
    int a, b; cin>>a>>b;
    cout<<"GCD: "<<GCD(a, b)<<" LCD: "<<LCD(a, b)<<endl;
}