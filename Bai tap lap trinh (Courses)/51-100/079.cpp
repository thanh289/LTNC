#include <bits/stdc++.h>
using namespace std;

double convertToC(double x){
    return (x-32)*(double)5/9;
}

double convertToK(double x){
    return convertToC(x) + 273.15;
}


int main(){
    double Min, Max, step;
    cin>>Min>>Max>>step;

    cout<<fixed<<setprecision(2);
    for(double i=Min; i<=Max; i+=step){
        cout<<i<<" ";
        cout<<convertToC(i)<<" ";
        cout<<convertToK(i);
        cout<<endl;
    }
}