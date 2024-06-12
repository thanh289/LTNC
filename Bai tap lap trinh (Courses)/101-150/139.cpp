#include <bits/stdc++.h>
using namespace std;

const int Max = 1500;
int notPrime[Max];

int main(){
    notPrime[0] = 1;
    notPrime[1] = 1;
    for(int i=2; i*i<Max; i++){
        if(!notPrime[i]){
            for(int j=i*i; j<Max; j+=i)
                notPrime[j] = 1;
        }
    }


    map<int, int> m;
    int div = 2;
    int x; cin>>x;
    while(x>1){
        if(!notPrime[div]){
            while(x%div == 0){
                x/=div;
                m[div]++;
            }
        }
        div++;
    }

    for(auto& i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}