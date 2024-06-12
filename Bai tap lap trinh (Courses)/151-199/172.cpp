#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    double x; cin>>x;
    double Min=x, Max=x;

    for(int i=1; i<n; i++){
        double t; cin>>t;
        if(t < Min) Min = t;
        if(t > Max) Max = t;
    }

    cout<<Max<<endl;
    cout<<Min<<endl;
}