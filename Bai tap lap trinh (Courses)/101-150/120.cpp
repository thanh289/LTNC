#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    vector<double> male, female;
    for(int i=1; i<=n; i++){
        double x, y; cin>>x>>y;
        male.push_back(x);
        female.push_back(y);
    }

    sort(male.begin(), male.end());
    sort(female.begin(), female.end());

    for(int i=0; i<n; i++){
        if(male[i] < female[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes"<<endl;

}